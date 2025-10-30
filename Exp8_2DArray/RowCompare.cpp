// Experiment 8 - 2D Arrays
// Program 6: Compare elements of first row to second row
#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int mat[r][c];
    cout << "Enter elements:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> mat[i][j];

    cout << "Comparing row 1 and row 2:\n";
    for (int j = 0; j < c; j++) {
        if (mat[0][j] == mat[1][j])
            cout << "Column " << j + 1 << ": Equal" << endl;
        else
            cout << "Column " << j + 1 << ": Not Equal" << endl;
    }

    return 0;
}
