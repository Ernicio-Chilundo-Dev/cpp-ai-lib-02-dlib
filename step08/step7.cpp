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

    }catch(exception& e){
        cerr <<"Erro: "<<e.what()<<endl;
        return 1;
    }

    return 0;
}