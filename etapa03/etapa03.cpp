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



    }
    catch(const exception& e)
    {
        cerr <<"Erro: "<< e.what() << '\n';
    }
    

    return 0;
}