// Experiment 5 - Conditional Statements
// Program 2: Check whether a character is Vowel or Consonant
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // Convert to lowercase for uniformity
    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        cout << ch << " is a Vowel.";
    else if ((ch >= 'a' && ch <= 'z'))
        cout << ch << " is a Consonant.";
    else
        cout << "Invalid input. Please enter an alphabet.";

    return 0;
}
