#include <iostream>
using namespace std;

class Base {
public:
    void display() { cout << "Base class function\n"; }
};

class Derived1 : public Base {
public:
    void show1() { cout << "Derived1 class\n"; }
};

class Derived2 : public Base {
public:
    void show2() { cout << "Derived2 class\n"; }
};

int main() {
    Derived1 d1;
    Derived2 d2;
    d1.display();
    d1.show1();
    d2.display();
    d2.show2();
    return 0;
}
