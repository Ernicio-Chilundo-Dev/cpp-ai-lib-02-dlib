#include <dlib/opencv.h>
#include <dlib/image_processing/frontal_face_detector.h>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
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

        frontal_face_detector detector = get_frontal_face_detector();

        while (true)
        {
            cv::Mat frame;
            cap >> frame;
            if(frame.empty())break;

            // Converter de Opencv para Dlib
            cv_image<bgr_pixel> cimg(frame);

            // Detecta rostos
            std::vector<rectangle> faces = detector(cimg);
            // desenha retangulos nos rostos detectados
            for(auto face : faces){
                cv::rectangle(frame,
                              cv::Point(face.left(), face.top()),
                              cv::Point(face.right(), face.bottom()),
                              cv::Scalar(0, 255, 0), 2);
            }
             // Mostra a imagem com deteccao
            cv::imshow("Deteccao de faces com (Dlib + OpenCv)", frame);

            // Sai com tecla q
            if(cv::waitKey(1)=='q') break;

        }

        cap.release();
        cv::destroyAllWindows();

        
    }
    catch(const std::exception& e)
    {
        std::cerr <<"Erro: "<< e.what() << '\n';
        return 1;
    }

    

    return 0;
}