#include <dlib/opencv.h>
#include <dlib/image_processing/frontal_face_detector.h>
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace dlib;

int main(){
    try
    {
        // Inicia webcam (0 = padrao)
        cv::VideoCapture cap(0);
        if(!cap.isOpened()){
            cerr << "Erro: nao foi possivel abrir o webcam";
            return 1;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return 0;
}