// Experiment 5 - Conditional Statements
// Program 1: Check whether a number is Even or Odd
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
        cout << num << " is Even.";
    else
        cout << num << " is Odd.";

    return 0;
}
