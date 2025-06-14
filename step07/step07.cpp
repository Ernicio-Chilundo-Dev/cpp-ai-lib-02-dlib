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

        while(true){
            cv::Mat frame;
            cap >> frame;
            if(frame.empty()) break;

            // Converter para dlib
            cv_image<bgr_pixel> cimg(frame);

            // Detecta rostos
            std::vector<rectangle> faces = detector(cimg);

            for(auto face : faces){
                full_object_detection shape = sp(cimg, face);

                // Desenhar retangulo da face
                cv::rectangle(frame,
                cv::Point(face.left(), face.top()),
                cv::Point(face.right(), face.bottom()),
                cv::Scalar(0, 255, 0), 2);

                // Desenhar pontos (landmmarks)
                for(int i = 0; i < shape.num_parts(); ++i){
                    cv::circle(frame,
                    cv::Point(shape.part(i).x(), shape.part(i).y()),
                    2, cv::Scalar(0, 0, 255), -1);
                }
            }

            // Mostrar janela
            cv::imshow("Landmarks em Tempo Real", frame);
            if(cv::waitKey(1) == 'q') break;

        }

        cap.release();
        cv::destroyAllWindows();
        
    }catch(const exception& e){
        cerr << "Erro: "<<e.what()<<endl;
        return 1;
    }

    return 0;
}