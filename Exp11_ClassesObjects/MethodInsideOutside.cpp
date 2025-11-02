#include <iostream>
using namespace std;

class Demo {
public:
    void inside() {
        cout << "Method defined inside class.\n";
    }
    void outside(); // Declaration
};

void Demo::outside() {
    cout << "Method defined outside class.\n";
}

int main() {
    Demo d;
    d.inside();
    d.outside();
    return 0;
}
