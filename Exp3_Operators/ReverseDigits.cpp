#include <iostream>
using namespace std;

int main() {
    int num, digit;
    cout << "Enter last 5 digits of your PRN: ";
    cin >> num;

    cout << "Digits in reverse: " << endl;
    while (num > 0) {
        digit = num % 10;
        cout << digit << endl;
        num /= 10;
    }
    return 0;
}
