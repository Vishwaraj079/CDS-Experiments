#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter X and Y coordinates: ";
    cin >> x >> y;

    if (x > 0 && y > 0)
        cout << "1st Quadrant";
    else if (x < 0 && y > 0)
        cout << "2nd Quadrant";
    else if (x < 0 && y < 0)
        cout << "3rd Quadrant";
    else if (x > 0 && y < 0)
        cout << "4th Quadrant";
    else if (x == 0 && y == 0)
        cout << "Origin";
    else
        cout << "On Axis";

    return 0;
}
