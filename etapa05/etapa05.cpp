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

        // Detectar faces
        std::vector<rectangle> faces = detector(img);


        // Mostrar imagem com pontos faciais
        image_window win;
        win.set_image(img);

for (auto face : faces) {
            full_object_detection shape = sp(img, face);

            for (unsigned int i = 0; i < shape.num_parts(); ++i) {
                point p = shape.part(i);
                rectangle r(p.x() - 1, p.y() - 1, p.x() + 1, p.y() + 1);
                win.add_overlay(r, rgb_pixel(0, 255, 0));
            }

            cout << "Face com " << shape.num_parts() << " pontos detectados." << endl;
        }
        
        cout << "Pressione qualquer tecla na janela para sair\n";
        win.wait_until_closed();
    
    }
    catch(const std::exception& e)
    {
        std::cerr <<"Erro: "<< e.what() << '\n';
        return 1;
    }
    
}