#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
    float marks;

    void getData() {
        cout << "Enter name, roll no, and marks: ";
        cin >> name >> roll >> marks;
    }

    void display() {
        cout << "\nName: " << name << "\nRoll No: " << roll << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.getData();
    s.display();
    return 0;
}
