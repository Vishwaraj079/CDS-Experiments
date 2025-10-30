// Experiment 6 - Loops
// Program 1: Print even numbers between 0 and 10
#include <iostream>
using namespace std;

int main() {
    cout << "Even numbers between 0 and 10: ";
    for (int i = 0; i <= 10; i++) {
        if (i % 2 == 0)
            cout << i << " ";
    }
    return 0;
}
