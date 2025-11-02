#include <iostream>
using namespace std;

class Demo {
    int value;
public:
    Demo(int v) { value = v; }
    Demo(Demo &obj) { value = obj.value; }
    void show() { cout << "Value = " << value << endl; }
};

int main() {
    Demo d1(50);
    Demo d2(d1);
    d1.show();
    d2.show();
    return 0;
}
