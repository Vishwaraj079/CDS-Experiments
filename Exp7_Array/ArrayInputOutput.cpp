// Experiment 7 - Arrays
// Program 1: Input and Output of array elements
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "You entered: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
