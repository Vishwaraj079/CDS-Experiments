// Experiment 10 - Pointer Operations
// Program 2: Swap two numbers using Call by Reference
#include <iostream>
using namespace std;

void swapReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swapReference(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}
