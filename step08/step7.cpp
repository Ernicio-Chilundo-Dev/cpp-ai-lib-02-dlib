#include <dlib/opencv.h>
#include <dlib/image_processing.h>
#include <dlib/image_processing/frontal_face_detector.h>
#include <dlib/image_io.h>
#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>

using namespace std;
using namespace dlib;

int main(){
    try{
        cv::VideoCapture cap(0);
        if(!cap.isOpened()){
            cerr << "Error opening webcam.\n";
            return 1;
        }

        frontal_face_detector detector = get_frontal_face_detector();
        shape_predictor sp;
        deserialize("shape_predictor_68_face_landmarks.dat") >> sp;

        int face_count = 0;

        while (true)
        {
            cv::Mat frame;
            cap >> frame;
            if(frame.empty()) break;

            cv_image<bgr_pixel> cimg(frame);
            std::vector<rectangle> faces = detector(cimg);

            for (auto face : faces)
            {
                full_object_detection shape = sp(cimg, face);

                // Align face
                matrix<rgb_pixel> face_chip;
                extract_image_chip(cimg, get_face_chip_details(shape, 150, 0.25), face_chip);

                // Save aligned face image
                string filename = "aligned_face_" + to_string(face_count++) + "jpg";
                save_jpeg(face_chip, filename);
                cout << "Saved" << filename<<endl;

                // Draw face rectangle
                cv::rectangle(frame,
                cv::Point(face.left(), face.top()),
                cv::Point(face.right(), face.bottom()),
                cv::Scalar(0, 255, 0), 2);


                //Draw Landmarks
                for (int i = 0; i < shape.num_parts(); ++i)
                {
                    cv::circle(frame,
                    cv::Point(shape.part(i).x(), shape.part(i).y()),
                    2, cv::Scalar(0, 0, 255), -1);
                }
                
            }
            cv::imshow("Face alignment & save", frame);
            if(cv::waitKey(1) == 'q') break;
            
        }

        cap.release();
        cv::destroyAllWindows();
        


    }catch(exception& e){
        cerr <<"Erro: "<<e.what()<<endl;
        return 1;
    }

    return 0;
}