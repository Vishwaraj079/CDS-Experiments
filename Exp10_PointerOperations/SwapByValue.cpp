// Experiment 10 - Pointer Operations
// Program 1: Swap two numbers using Call by Value
#include <iostream>
using namespace std;

void swapValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "Inside function (after swap): a = " << x << ", b = " << y << endl;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before function call: a = " << a << ", b = " << b << endl;
    swapValue(a, b);
    cout << "After function call: a = " << a << ", b = " << b << endl;

    return 0;
}
