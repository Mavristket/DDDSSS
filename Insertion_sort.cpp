#include <iostream>
using namespace std;

void insertion(int a[], int n) {
    a[0] = -100;

    for (int i = 2; i <= n; i++) {
        int temp = a[i];
        int ptr = i - 1;

        while (temp < a[ptr]) {
            a[ptr + 1] = a[ptr];
            ptr--;
        }
        a[ptr + 1] = temp;

        cout << "Pass " << i - 1 << ": ";
        for (int j = 1; j <= n; j++) {
            cout << a[j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 6;
    int a[7];

    cout << "Enter the numbers of array:\n";
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    insertion(a, n);

    return 0;
}

