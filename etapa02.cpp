#include <dlib/image_io.h>
#include <dlib/gui_widgets.h>
#include <dlib/image_transforms.h>
#include <iostream>

using namespace std;
using namespace dlib;

int main(){
    array2d<rgb_pixel> img;
    load_image(img, "../test.jpg");

    return 0;
}