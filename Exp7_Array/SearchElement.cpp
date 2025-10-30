// Experiment 7 - Arrays
// Program 3: Search element in array
#include <iostream>
using namespace std;

int main() {
    int n, key, found = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << key << " found at position " << i + 1 << endl;
            found = 1;
            break;
        }
    }
    if (!found)
        cout << key << " not found.";

    return 0;
}
