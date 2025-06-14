#include <dlib/opencv.h>
#include <dlib/image_processing.h>
#include <dlib/image_processing/frontal_face_detector.h>
#include <opencv2/opencv.hpp>
#include <iostream>


using namespace std;
using namespace dlib;

int main(){
    try{
        // Acessa webcam
        cv::VideoCapture cap(0);
        if(!cap.isOpened()){
            cerr << "Erro ao abrir a webcam\n";
            return 1;
        }

        

    }catch(const exception& e){
        cerr << "Erro: "<<e.what()<<endl;
        return 1;
    }

    return 0;
}