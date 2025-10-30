// Experiment 9 - Pointers
// Program 2: Addition and subtraction using pointers
#include <iostream>
using namespace std;

int main() {
    int a = 20, b = 10;
    int *p1 = &a, *p2 = &b;

    cout << "Addition = " << (*p1 + *p2) << endl;
    cout << "Subtraction = " << (*p1 - *p2) << endl;

    return 0;
}
