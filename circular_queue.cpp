#include <iostream>
using namespace std;

#define SIZE 5

class CircularQueue {
    int arr[SIZE];
    int front, rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int x) {
        if ((rear + 1) % SIZE == front) {
            cout << "Queue Overflow\n";
        } else {
            if (front == -1) front = 0;
            rear = (rear + 1) % SIZE;
            arr[rear] = x;
            cout << "Inserted: " << x << endl;
        }
    }

    void dequeue() {
        if (front == -1) {
            cout << "Queue Underflow\n";
        } else {
            cout << "Deleted: " << arr[front] << endl;

            if (front == rear) {
                front = rear = -1;
            } else {
                front = (front + 1) % SIZE;
            }
        }
    }

    void display() {
        if (front == -1) {
            cout << "Queue is empty\n";
        } else {
            int i = front;
            while (true) {
                cout << arr[i] << " ";
                if (i == rear) break;
                i = (i + 1) % SIZE;
            }
            cout << endl;
        }
    }
};

int main() {
    CircularQueue q;
    int choice, val;

    do {
        cout << "\n1.Enqueue 2.Dequeue 3.Display 4.Exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> val;
                q.enqueue(val);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
        }
    } while (choice != 4);

    return 0;
}