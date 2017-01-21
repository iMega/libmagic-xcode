#include <Magick++.h>
#include <iostream>

using namespace std;
using namespace Magick;

int main(int argc, char **argv)
{
    InitializeMagick(*argv);
    Image image;

    try {
        image.read("logo.png");
        image.crop(Geometry(100,100, 100, 100));
        image.write("logo.png");
    } catch(Exception &error_) {
        cout << "Caught exception: " << error_.what() << endl;

        return 1;
    }

    return 0; 
}
