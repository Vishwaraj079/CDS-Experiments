#include <iostream>
using namespace std;

class Box {
    int length, width, height;
public:
    Box() { length = width = height = 1; }
    Box(int l, int w, int h) { length = l; width = w; height = h; }

    int volume() { return length * width * height; }
};

int main() {
    Box b1;
    Box b2(3, 4, 5);
    cout << "Volume (default): " << b1.volume() << endl;
    cout << "Volume (parameterized): " << b2.volume() << endl;
    return 0;
}
