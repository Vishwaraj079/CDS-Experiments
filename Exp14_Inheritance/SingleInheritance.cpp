#include <iostream>
using namespace std;

class Parent {
public:
    void showParent() { cout << "This is Parent class.\n"; }
};

class Child : public Parent {
public:
    void showChild() { cout << "This is Child class.\n"; }
};

int main() {
    Child obj;
    obj.showParent();
    obj.showChild();
    return 0;
}
