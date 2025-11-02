#include <iostream>
using namespace std;

class Rectangle {
public:
    float length, breadth;
    void get() {
        cout << "Enter length and breadth: ";
        cin >> length >> breadth;
    }
    float area() {
        return length * breadth;
    }
};

int main() {
    Rectangle r;
    r.get();
    cout << "Area = " << r.area();
    return 0;
}
