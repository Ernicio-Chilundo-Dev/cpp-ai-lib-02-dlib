#include <dlib/opencv.h>
#include <dlib/image_processing.h>
#include <dlib/image_processing/frontal_face_detector.h>
#include <dlib/image_io.h>
#include <dlib/dnn.h>
#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>
#include <map>

using namespace std;
using namespace dlib;

// Define the face recognition network (same as step 9)
template <template<int, template<typename> class, int, typename> class block,
    int N, template<typename> class BN, typename SUBNET>
using risidual = add_prev1<block<N, BN, 1, tag1<SUBNET>>>;

template <template<int, template<typename> class, int, typename> class block,
    int N, template<typename> class BN, typename SUBNET>
using risidual_down = add_prev2<avg_pool<2, 2, 2, 2, skip1<block<N, BN, 2, tag2<SUBNET>>>>>;

template <int N, template <typename> class BN, int stride, typename SUBNET>
using block = BN<con<N, 3, 3, stride, rrelu<BN<con<N, 3, 3, 1, 1, SUBNET>>>>>;

template <int N, typename SUBNET> using ares      = relu<risidual<block, N, affine, SUBNET>>;
template <int N, typename SUBNET> using ares_down = relu<risidual_down<block,N, affine, SUBNET>>;

template <typename SUBNET> using alevel0 = ares_down <256, SUBNET>;
template <typename SUBNET> using alevel1 = ares<256, ares<256, ares_down<256, SUBNET>>>;
template <typename SUBNET> using alevel2 = ares<128, ares<128, ares_down<128, SUBNET>>>;
template <typename SUBNET> using alevel3 = ares<64, ares<64, ares<64, ares_down<64, SUBNET>>>>;
template <typename SUBNET> using alevel4 = ares<32, ares<32, ares_down<32, SUBNET>>>;

template<typename SUBNET>
using anet_type = loss_matric<fc_no_bias<128, avg_pool_everything<
                                <alevel0<alevel1<alevel2<alevel3<alevel4<
                                max_pool<3, 3, 2,2,
                                relu<affine<con<32, 7, 7, 2, 2,
                                input_rgb_image_sized<150>>>>>>>>>>>>;

float face_distance(const matrix<float, 0, 1>& face1, const matrix<float, 0, 1>& face2){
    return length(face1 - face2);
}

int main(){
    try{
        cv::VideoCapture cap(0);
        if(!cap.isOpened()){
            cerr << "Error opening webcam\n";
            return 1;
        }

        frontal_face_detector detector = get_frontal_face_detector();
        shape_predictor sp;
        deserialize("shape_predictor_face_landmarks.dat") >> sp;

        anet_type net;
        deserialize("dlib_face-recogniton_resnet_model_v1.dat") >> net;

        // Map to store label and corresponding face descriptors
        std::map<std::string, matrix<float, 0, 1>> known_faces;

    }catch(exception& e){
        cerr << "Erro: "<<e.what()<<endl;
        return 1;
    }
    return 0;
}
