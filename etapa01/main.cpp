#include <dlib/image_processing/frontal_face_detector.h>
#include <dlib/image_io.h>
#include <iostream>

using namespace std;
using namespace dlib;

int main() {
    array2d<rgb_pixel> img;

    try {
        load_image(img, "../test.jpg");

        frontal_face_detector detector = get_frontal_face_detector();
        std::vector<rectangle> faces = detector(img);

        cout << "Faces detectadas: " << faces.size() << endl;
    } catch (exception& e) {
        cout << "Erro: " << e.what() << endl;
    }

    return 0;
}
