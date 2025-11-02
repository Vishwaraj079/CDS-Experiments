#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    try {
        if (age < 18)
            throw age;
        cout << "You are eligible to vote." << endl;
    } catch (int x) {
        cout << "Exception: Age " << x << " is below 18. Not eligible to vote.";
    }

    return 0;
}
