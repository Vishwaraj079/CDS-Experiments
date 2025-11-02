#include <iostream>
#include <string>
using namespace std;

void reverse(string str, int i) {
    if (i < 0) return;
    cout << str[i];
    reverse(str, i - 1);
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;
    cout << "Reversed string: ";
    reverse(s, s.length() - 1);
    return 0;
}
