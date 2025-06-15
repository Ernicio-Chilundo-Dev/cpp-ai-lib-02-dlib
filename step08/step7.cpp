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

        

    }catch(exception& e){
        cerr <<"Erro: "<<e.what()<<endl;
        return 1;
    }

    return 0;
}