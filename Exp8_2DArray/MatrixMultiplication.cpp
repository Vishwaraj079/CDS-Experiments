// Experiment 8 - 2D Arrays
// Program 3: Multiplication of two matrices
#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication not possible!";
        return 0;
    }

    int a[r1][c1], b[r2][c2], product[r1][c2];

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> a[i][j];

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> b[i][j];

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++) {
            product[i][j] = 0;
            for (int k = 0; k < c1; k++)
                product[i][j] += a[i][k] * b[k][j];
        }

    cout << "Product of matrices:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            cout << product[i][j] << " ";
        cout << endl;
    }
    return 0;
}
