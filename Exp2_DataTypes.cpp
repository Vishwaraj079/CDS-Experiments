// Experiment 2: Data Types
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 3.14f;
    double c = 123.456;
    char d = 'A';
    bool e = true;
    string f = "Hello C++";

    cout << "---- DATA TYPES AND SIZES ----" << endl;
    cout << "Integer value: " << a << "\tSize: " << sizeof(a) << " bytes" << endl;
    cout << "Float value: " << b << "\tSize: " << sizeof(b) << " bytes" << endl;
    cout << "Double value: " << c << "\tSize: " << sizeof(c) << " bytes" << endl;
    cout << "Character value: " << d << "\tSize: " << sizeof(d) << " bytes" << endl;
    cout << "Boolean value: " << e << "\tSize: " << sizeof(e) << " bytes" << endl;
    cout << "String value: " << f << "\tSize: " << sizeof(f) << " bytes (object size)" << endl;

    return 0;
}
