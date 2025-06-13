#include <iostream>
#include <dlib/image_processing.h>
#include <dlib/image_processing/frontal_face_detector.h>
#include <dlib/image_io.h>
#include <dlib/gui_widgets.h>

using namespace std;
using namespace dlib;

int main(){
    try
    {
        // Carregar imagem
        array2d<rgb_pixel> img;
        load_image(img, "../test.jpg");

        // Carregar o detector de faces e preditor de landmarks
        frontal_face_detector detector = get_frontal_face_detector();
        shape_predictor sp;
        deserialize("shape_predictor_68_face_landmarks.dat") >> sp; 


    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}