#include <iostream>
using namespace std;

int main() {
    // 2. Read array and size
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // 3. Find maximum element
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    // 4. Set exp ← 1
    int exp = 1;

    // 5. WHILE (maxVal / exp > 0)
    while (maxVal / exp > 0) {

        // 5.1 Create output array
        int output[100];

        // 5.2 Initialize count[10] ← {0}
        int count[10] = {0};

        // 5.3 Count occurrences
        for (int i = 0; i < n; i++) {
            int digit = (arr[i] / exp) % 10;
            count[digit]++;
        }

        // 5.4 Cumulative count
        for (int i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }

        // 5.5 Build output array (right to left)
        for (int i = n - 1; i >= 0; i--) {
            int digit = (arr[i] / exp) % 10;
            output[count[digit] - 1] = arr[i];
            count[digit]--;
        }

        // 5.6 Copy back to original array
        for (int i = 0; i < n; i++) {
            arr[i] = output[i];
        }

        // 5.7 exp ← exp × 10
        exp = exp * 10;
    }

    // 6. Print sorted array
    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}