#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

// Add node at end
void insertEnd(int val) {
    Node* newNode = new Node{val, nullptr};
    if (!head)
        head = newNode;
    else {
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }
}

// Add node at start
void insertStart(int val) {
    Node* newNode = new Node{val, head};
    head = newNode;
}

// Display list
void display() {
    Node* temp = head;
    cout << "Linked List: ";
    while (temp) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertStart(5);
    display();
    return 0;
}
