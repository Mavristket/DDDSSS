#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, pos, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n--- ARRAY OPERATIONS ---\n";
        cout << "1. Display\n";
        cout << "2. Insert\n";
        cout << "3. Delete\n";
        cout << "4. Search\n";
        cout << "5. Update\n";
        cout << "6. Reverse\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

        case 1: // Display
            cout << "Array: ";
            for(int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;

        case 2: // Insert
            cout << "Enter position and value: ";
            cin >> pos >> value;

            if(pos < 0 || pos > n) {
                cout << "Invalid position\n";
                break;
            }

            for(int i = n; i > pos; i--) {
                arr[i] = arr[i - 1];
            }

            arr[pos] = value;
            n++;
            break;

        case 3: // Delete
            cout << "Enter position: ";
            cin >> pos;

            if(pos < 0 || pos >= n) {
                cout << "Invalid position\n";
                break;
            }

            for(int i = pos; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }

            n--;
            break;

        case 4: // Search
            cout << "Enter value to search: ";
            cin >> value;

            for(int i = 0; i < n; i++) {
                if(arr[i] == value) {
                    cout << "Found at index " << i << endl;
                    break;
                }
            }
            break;

        case 5: // Update
            cout << "Enter position and new value: ";
            cin >> pos >> value;

            if(pos < 0 || pos >= n) {
                cout << "Invalid position\n";
                break;
            }

            arr[pos] = value;
            break;

        case 6: // Reverse
            for(int i = 0; i < n / 2; i++) {
                int temp = arr[i];
                arr[i] = arr[n - i - 1];
                arr[n - i - 1] = temp;
            }
            cout << "Array reversed\n";
            break;

        case 7:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while(choice != 7);

    return 0;
}