// Experiment 9 - Pointers
// Program 4: Display string elements using pointers
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[50];
    cout << "Enter a string: ";
    cin >> str;

    char *ptr = str;

    cout << "Characters in the string:\n";
    while (*ptr != '\0') {
        cout << *ptr << endl;
        ptr++;
    }

    return 0;
}
