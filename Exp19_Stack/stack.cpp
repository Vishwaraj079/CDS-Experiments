#include <iostream>
#define SIZE 5
using namespace std;

class Stack {
    int arr[SIZE], top;
public:
    Stack() { top = -1; }

    void push(int val) {
        if (top == SIZE - 1)
            cout << "Stack Overflow\n";
        else
            arr[++top] = val;
    }

    void pop() {
        if (top == -1)
            cout << "Stack Underflow\n";
        else
            cout << arr[top--] << " popped\n";
    }

    void display() {
        if (top == -1)
            cout << "Stack Empty\n";
        else {
            cout << "Stack: ";
            for (int i = top; i >= 0; i--)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.display();
    s.pop();
    s.display();
    return 0;
}
