// Experiment 4 - Bitwise Operators
// Program: Set and Reset specific bits in an integer
#include <iostream>
using namespace std;

int main() {
    unsigned int num, position;
    int choice;

    cout << "Enter an integer: ";
    cin >> num;

    cout << "Enter bit position to modify (0-31): ";
    cin >> position;

    cout << "Choose operation:\n1. Set bit\n2. Reset bit\n";
    cin >> choice;

    if (choice == 1) {
        num = num | (1 << position);     // Set bit using OR
        cout << "After setting bit " << position << ": " << num << endl;
    } 
    else if (choice == 2) {
        num = num & ~(1 << position);    // Reset bit using AND + NOT
        cout << "After resetting bit " << position << ": " << num << endl;
    } 
    else {
        cout << "Invalid choice!";
    }

    return 0;
}
