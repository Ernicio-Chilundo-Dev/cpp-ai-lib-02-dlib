#include <dlib/image_processing/frontal_face_detector.h>
#include <dlib/image_io.h>
#include <dlib/gui_widgets.h>
#include <iostream>

using namespace std;
using namespace dlib;

int main(){
    try
    {
        // Carregar imagem
        array2d <rgb_pixel> img;
        load_image(img, "../test.jpg");

        // Obtem o detector de faces frontal
        frontal_face_detector detector  = get_frontal_face_detector();

        // Detecta faces
        std::vector<rectangle> faces = detector(img);
        cout << "Detectadas "<<faces.size() << " face(s)\n";

        // Desenhar as deteccoes
        image_window win;
        win.set_image(img);
        win.add_overlay(faces, rgb_pixel(255, 0, 0));

        cout << "pressione qualquer tecla para fechar a janela\n";
        win.wait_until_closed();
    }
    catch(const exception& e)
    {
        cerr <<"Erro: "<< e.what() << '\n';
        return 1;
    }
    

    return 0;
}