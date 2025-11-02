#include <iostream>
using namespace std;

class Parent {
protected:
    int val = 10;
};

class Child : protected Parent {
public:
    void show() { cout << "Accessing protected value: " << val << endl; }
};

int main() {
    Child c;
    c.show();
    return 0;
}
