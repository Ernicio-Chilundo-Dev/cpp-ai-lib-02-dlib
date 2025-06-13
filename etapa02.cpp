#include <dlib/image_io.h>
#include <dlib/gui_widgets.h>
#include <dlib/image_processing/frontal_face_detector.h>
#include <dlib/image_transforms.h>
#include <dlib/pixel.h>
#include <dlib/array2d.h>
#include <iostream>

using namespace std;
using namespace dlib;

int main(){
    try
    {
        array2d<rgb_pixel> img;
        load_image(img, "../test.jpg");

        // Converter para escala de cinza
        array2d<unsigned char> img_gray;
        assign_image(img_gray, img);


    }
    catch(const exception& e)
    {
        cerr <<"Erro: " << e.what() << '\n';
        return 1;
    }
    

    return 0;
}