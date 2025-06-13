#include <dlib/image_io.h>
#include <dlib/image_transforms.h>
#include <dlib/gui_widgets.h>
#include <iostream>

using namespace std;
using namespace dlib;

int main(){
    try
    {
        array2d<unsigned char> img;
        load_image(img, "../test.jpg");

        // Normalizacao de contraste
        array2d<unsigned char> normalized_img;
        equalize_histogram(img, normalized_img);

        // Aplicar suavizacao (blur)
        array2d <unsigned char> blurred_img;
        gaussian_blur(normalized_img, blurred_img);
        
        // Deteccao de bordas usando o filtro sobel
        array2d <short> edge_x, edge_y;
        sobel_edge_detector(blurred_img, edge_x, edge_y);

        // Mostrar resultados (como imagem simples em janela)
        image_window win1(normalized_img, "Contraste normalizado");
        image_window win2(blurred_img, "Imagem suavizada");
        image_window win3(edge_x, "Direcao - edge_x");

        cout << "Pressione qualquer tecla para fechar as janelas\n";
        win1.wait_until_closed();
        win2.wait_until_closed();
        win3.wait_until_closed();
    }
    catch(const exception& e)
    {
        cerr <<"Erro: "<< e.what() << '\n';
    }
    

    return 0;
}