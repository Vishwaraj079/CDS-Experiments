#include <iostream>
using namespace std;

int main() {
    float marks;
    cout << "Enter your marks (out of 100): ";
    cin >> marks;

    if (marks >= 90)
        cout << "Grade: A+";
    else if (marks >= 80)
        cout << "Grade: A";
    else if (marks >= 70)
        cout << "Grade: B";
    else if (marks >= 60)
        cout << "Grade: C";
    else if (marks >= 50)
        cout << "Grade: D";
    else
        cout << "Grade: F (Fail)";

    return 0;
}
