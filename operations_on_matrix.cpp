#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], result[10][10];
    int r, c, choice;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    cout << "Enter Matrix A:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter Matrix B:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> b[i][j];
        }
    }

    cout << "\nChoose Operation:\n";
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Transpose\n";
    cin >> choice;

    switch(choice) {

        case 1: // Addition
            for(int i = 0; i < r; i++) {
                for(int j = 0; j < c; j++) {
                    result[i][j] = a[i][j] + b[i][j];
                }
            }

            cout << "\nAddition Result:\n";
            for(int i = 0; i < r; i++) {
                for(int j = 0; j < c; j++) {
                    cout << result[i][j] << " ";
                }
                cout << endl;
            }
            break;

        case 2: // Subtraction
            for(int i = 0; i < r; i++) {
                for(int j = 0; j < c; j++) {
                    result[i][j] = a[i][j] - b[i][j];
                }
            }

            cout << "\nSubtraction Result:\n";
            for(int i = 0; i < r; i++) {
                for(int j = 0; j < c; j++) {
                    cout << result[i][j] << " ";
                }
                cout << endl;
            }
            break;

        case 3: // Multiplication
            for(int i = 0; i < r; i++) {
                for(int j = 0; j < c; j++) {
                    result[i][j] = 0;
                    for(int k = 0; k < c; k++) {
                        result[i][j] += a[i][k] * b[k][j];
                    }
                }
            }

            cout << "\nMultiplication Result:\n";
            for(int i = 0; i < r; i++) {
                for(int j = 0; j < c; j++) {
                    cout << result[i][j] << " ";
                }
                cout << endl;
            }
            break;

        case 4: // Transpose of Matrix A
            cout << "\nTranspose of Matrix A:\n";
            for(int i = 0; i < c; i++) {
                for(int j = 0; j < r; j++) {
                    cout << a[j][i] << " ";
                }
                cout << endl;
            }
            break;

        default:
            cout << "Invalid Choice!";
    }

    return 0;
}