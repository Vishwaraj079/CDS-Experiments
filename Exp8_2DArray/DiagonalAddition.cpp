// Experiment 8 - 2D Arrays
// Program 4: Addition of diagonal elements
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int mat[n][n], sum = 0;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];

    for (int i = 0; i < n; i++)
        sum += mat[i][i];

    cout << "Sum of diagonal elements = " << sum;
    return 0;
}


