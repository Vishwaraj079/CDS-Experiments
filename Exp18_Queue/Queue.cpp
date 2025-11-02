#include <iostream>
#define SIZE 5
using namespace std;

class Queue {
    int arr[SIZE], front, rear;
public:
    Queue() { front = -1; rear = -1; }

    bool isFull() { return rear == SIZE - 1; }
    bool isEmpty() { return front == -1 || front > rear; }

    void enqueue(int val) {
        if (isFull()) cout << "Queue Overflow\n";
        else {
            if (front == -1) front = 0;
            arr[++rear] = val;
            cout << val << " added to queue\n";
        }
    }

    void dequeue() {
        if (isEmpty()) cout << "Queue Underflow\n";
        else cout << arr[front++] << " removed from queue\n";
    }

    void display() {
        if (isEmpty()) cout << "Queue is empty\n";
        else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.dequeue();
    q.display();
    return 0;
}
