#include <dlib/opencv.h>
#include <dlib/image_processing.h>
#include <dlib/image_processing/frontal_face_detector.h>
#include <dlib/image_io.h>
#include <dlib/dnn.h>
#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>

using namespace std;
using namespace dlib;

// Dlib Face Recognition Network Definition
template <template<int, template<typename> class, int, typename> class block,
          int N, template<typename> class BN, typename SUBNET>
using residual = add_prev1<block<N, BN, 1, tag1<SUBNET>>>;

template <template<int, template<typename> class, int, typename> class block,
          int N, template<typename> class BN, typename SUBNET>
using residual_down = add_prev2<avg_pool<2, 2, 2, 2, skip1<block<N, BN, 2, tag2<SUBNET>>>>>;

template <int N, template <typename> class BN, int stride, typename SUBNET>
using block  = BN<con<N, 3, 3, stride, stride, relu<BN<con<N, 3, 3, 1, 1, SUBNET>>>>>;

template <int N, typename SUBNET> using ares      = relu<residual<block, N, affine, SUBNET>>;
template <int N, typename SUBNET> using ares_down = relu<residual_down<block, N, affine, SUBNET>>;

template <typename SUBNET> using alevel0 = ares_down<256, SUBNET>;
template <typename SUBNET> using alevel1 = ares<256, ares<256, ares_down<256, SUBNET>>>;
template <typename SUBNET> using alevel2 = ares<128, ares<128, ares_down<128, SUBNET>>>;
template <typename SUBNET> using alevel3 = ares<64, ares<64, ares<64, ares_down<64, SUBNET>>>>;
template <typename SUBNET> using alevel4 = ares<32, ares<32, ares<32, SUBNET>>>;

template <typename SUBNET>
using anet_type = loss_metric<fc_no_bias<128, avg_pool_everything<
                                alevel0<alevel1<alevel2<alevel3<alevel4<
                                max_pool<3, 3, 2, 2,
                                relu<affine<con<32, 7, 7, 2, 2,
                                input_rgb_image_sized<150>>>>>>>>>>>>;

int main() {
    try {
        cv::VideoCapture cap(0);
        if (!cap.isOpened()) {
            cerr << "Error opening webcam." << endl;
            return 1;
        }

        frontal_face_detector detector = get_frontal_face_detector();
        shape_predictor sp;
        deserialize("shape_predictor_68_face_landmarks.dat") >> sp;

        anet_type net;
        deserialize("dlib_face_recognition_resnet_model_v1.dat") >> net;

        matrix<float,0,1> reference_descriptor;
        bool reference_set = false;

        while (true) {
            cv::Mat frame;
            cap >> frame;
            if (frame.empty()) break;

            cv_image<bgr_pixel> cimg(frame);
            std::vector<rectangle> faces = detector(cimg);

            for (auto face : faces) {
                full_object_detection shape = sp(cimg, face);
                matrix<rgb_pixel> face_chip;
                extract_image_chip(cimg, get_face_chip_details(shape,150,0.25), face_chip);

                matrix<float,0,1> face_descriptor = net(face_chip);

                string label = "Unknown";
                if (reference_set) {
                    float distance = length(reference_descriptor - face_descriptor);
                    label = distance < 0.6 ? "Same Person" : "Different Person";

                    // Show distance for debug
                    cout << "Distance: " << distance << endl;
                }

                // Draw rectangle
                cv::rectangle(frame,
                              cv::Point(face.left(), face.top()),
                              cv::Point(face.right(), face.bottom()),
                              cv::Scalar(0,255,0), 2);

                // Draw landmarks
                for (int i = 0; i < shape.num_parts(); ++i) {
                    cv::circle(frame,
                               cv::Point(shape.part(i).x(), shape.part(i).y()),
                               2, cv::Scalar(0,0,255), -1);
                }

                // Add label
                cv::putText(frame, label,
                            cv::Point(face.left(), face.top()-10),
                            cv::FONT_HERSHEY_SIMPLEX, 0.8,
                            cv::Scalar(255,255,255), 2);
            }

            cv::imshow("Face Recognition", frame);
            char key = cv::waitKey(1);
            if (key == 'q') break;
            if (key == 'r' && !faces.empty()) {
                full_object_detection shape = sp(cimg, faces[0]);
                matrix<rgb_pixel> face_chip;
                extract_image_chip(cimg, get_face_chip_details(shape,150,0.25), face_chip);
                reference_descriptor = net(face_chip);
                reference_set = true;
                cout << "Reference face captured." << endl;
            }
        }

        cap.release();
        cv::destroyAllWindows();

    } catch (exception& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }

    return 0;
}
