// Experiment 3 - Operators
// Program 1: Check Positive or Negative
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0)
        cout << num << " is Positive";
    else if (num < 0)
        cout << num << " is Negative";
    else
        cout << "Number is Zero";
    return 0;
}
