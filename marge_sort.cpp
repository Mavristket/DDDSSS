#include <iostream>
using namespace std;

void merge(int A[], int R, int B[], int S, int C[]) {
    int NA = 0, NB = 0, PTR = 0;

    // Step 2: Compare and merge
    while (NA < R && NB < S) {
        if (A[NA] < B[NB]) {
            C[PTR] = A[NA];
            PTR++;
            NA++;
        } else {
            C[PTR] = B[NB];
            PTR++;
            NB++;
        }
    }

    // Step 3: Copy remaining elements
    if (NA >= R) {
        for (int K = 0; K < S - NB; K++) {
            C[PTR + K] = B[NB + K];
        }
    } else {
        for (int K = 0; K < R - NA; K++) {
            C[PTR + K] = A[NA + K];
        }
    }
}

// Merge Sort using above merge
void mergeSort(int arr[], int n) {
    if (n <= 1) return;

    int mid = n / 2;

    int A[100], B[100];

    // Divide into A and B
    for (int i = 0; i < mid; i++) {
        A[i] = arr[i];
    }
    for (int i = mid; i < n; i++) {
        B[i - mid] = arr[i];
    }

    // Recursive calls
    mergeSort(A, mid);
    mergeSort(B, n - mid);

    // Merge into C (same array)
    merge(A, mid, B, n - mid, arr);
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, n);

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}