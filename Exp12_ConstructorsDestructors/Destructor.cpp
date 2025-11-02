#include <iostream>
using namespace std;

class Sample {
public:
    Sample() { cout << "Constructor invoked\n"; }
    ~Sample() { cout << "Destructor invoked\n"; }
};

int main() {
    Sample s;
    return 0;
}
