#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int year;

    void getDetails() {
        cout << "Enter brand and year: ";
        cin >> brand >> year;
    }
    void showDetails() {
        cout << "Car Brand: " << brand << "\nManufacture Year: " << year << endl;
    }
};

int main() {
    Car c;
    c.getDetails();
    c.showDetails();
    return 0;
}
