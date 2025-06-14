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

        // Detector de face e preditor landmarks
        frontal_face_detector detector = get_frontal_face_detector();
        shape_predictor sp;
        deserialize("shape_predictor_68_face_landmarks.dat") >> sp;

    }catch(const exception& e){
        cerr << "Erro: "<<e.what()<<endl;
        return 1;
    }

    return 0;
}