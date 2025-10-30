// Experiment 10 - Pointer Operations
// Program 3: Calculate salary increment using pointers
#include <iostream>
using namespace std;

int main() {
    float salary, increment, newSalary;
    float *pSalary = &salary, *pInc = &increment;

    cout << "Enter current salary: ";
    cin >> *pSalary;

    cout << "Enter increment percentage: ";
    cin >> *pInc;

    newSalary = *pSalary + (*pSalary * (*pInc / 100));
    cout << "New Salary after " << *pInc << "% increment = " << newSalary;

    return 0;
}
