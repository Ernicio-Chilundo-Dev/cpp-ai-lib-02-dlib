#include <dlib/image_io.h>
#include <dlib/gui_widgets.h>
#include <dlib/image_transforms.h>
#include <iostream>

using namespace std;
using namespace dlib;

int main(){
    try
    {
        array2d<rgb_pixel> img;
        load_image(img, "../test.jpg");

        // Converter para escala de siza
        array2d<usingned char> img_gray;
        assign_image(img_gray, img);
    }
    catch(const exception& e)
    {
        cerr <<"Erro: " << e.what() << '\n';
        return 1;
    }
    

    return 0;
}