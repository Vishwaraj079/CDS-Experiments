#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Default Constructor called.\n";
    }
};

int main() {
    Demo obj;
    return 0;
}
