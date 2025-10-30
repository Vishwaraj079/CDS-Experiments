// Experiment 9 - Pointers
// Program 1: Increment pointers for various data types
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    cout << "Before increment:" << endl;
    cout << "p1 = " << p1 << ", p2 = " << p2 << ", p3 = " << (void*)p3 << endl;

    p1++; p2++; p3++;

    cout << "\nAfter increment:" << endl;
    cout << "p1 = " << p1 << ", p2 = " << p2 << ", p3 = " << (void*)p3 << endl;

    return 0;
}
