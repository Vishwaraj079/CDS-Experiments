#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) { return a + b; }
    double add(double a, double b) { return a + b; }
    int add(int a, int b, int c) { return a + b + c; }
};

int main() {
    Math m;
    cout << m.add(2, 3) << endl;
    cout << m.add(2.5, 3.7) << endl;
    cout << m.add(1, 2, 3) << endl;
    return 0;
}
