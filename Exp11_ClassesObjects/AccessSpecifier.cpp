#include <iostream>
using namespace std;

class Example {
private:
    int a = 10;
protected:
    int b = 20;
public:
    int c = 30;

    void display() {
        cout << "Private a = " << a << endl;
        cout << "Protected b = " << b << endl;
        cout << "Public c = " << c << endl;
    }
};

int main() {
    Example obj;
    obj.display();
    cout << "Public member accessed directly: " << obj.c;
    return 0;
}
