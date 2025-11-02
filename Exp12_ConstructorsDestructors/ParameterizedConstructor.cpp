#include <iostream>
using namespace std;

class Add {
    int a, b;
public:
    Add(int x, int y) {
        a = x; b = y;
        cout << "Sum = " << a + b << endl;
    }
};

int main() {
    Add obj(10, 20);
    return 0;
}
