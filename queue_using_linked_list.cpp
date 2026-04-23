#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Front and Rear pointers
Node* front = NULL;
Node* rear = NULL;

// Enqueue (Insert)
void enqueue(int val) {
    Node* newNode = new Node();g
    newNode->data = val;
    newNode->next = NULL;

    if (rear == NULL) {   // Empty queue
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }

    cout << val << " inserted\n";
}

// Dequeue (Delete)
void dequeue() {
    if (front == NULL) {
        cout << "Queue is empty\n";
        return;
    }

    Node* temp = front;
    cout << temp->data << " deleted\n";

    front = front->next;

    if (front == NULL) {  // If queue becomes empty
        rear = NULL;
    }

    delete temp;
}

// Display queue
void display() {
    if (front == NULL) {
        cout << "Queue is empty\n";
        return;
    }

    Node* temp = front;
    cout << "Queue: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Main function
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();
    display();

    return 0;
}