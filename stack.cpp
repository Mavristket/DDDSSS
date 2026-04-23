#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX];
int top = -1;

// Push
void push() {
    int x;
    if (top == MAX - 1) {
        cout << "Stack Overflow\n";
    } else {
        cout << "Enter element: ";
        cin >> x;
        stack[++top] = x;
    }
}

// Pop
void pop() {
    if (top == -1) {
        cout << "Stack Underflow\n";
    } else {
        cout << "Deleted element: " << stack[top--] << endl;
    }
}

// Peek
void peek() {
    if (top == -1) {
        cout << "Stack is empty\n";
    } else {
        cout << "Top element: " << stack[top] << endl;
    }
}

// Display
void display() {
    if (top == -1) {
        cout << "Stack is empty\n";
    } else {
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "\n--- STACK MENU ---\n";
        cout << "1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice\n";
        }

    } while (choice != 5);

    return 0;
}