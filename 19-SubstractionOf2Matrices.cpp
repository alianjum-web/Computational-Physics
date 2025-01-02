#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i, j, r1, c1, r2, c2;

    cout << "Enter the no. of rows of matrix A: ";
    cin >> r1;
    cout << "Enter the no. of columns of matrix A: ";
    cin >> c1;
    cout << "Enter the no. of rows of matrix B: ";
    cin >> r2;
    cout << "Enter the no. of columns of matrix B: ";
    cin >> c2;

    if (r1 != r2 || c1 != c2) {
        cout << "The order of the matrices is different." << endl;
        return 1; // Indicate an error
    }

    int a[r1][c1], b[r2][c2], c[r1][c1];

    cout << "Now enter the elements of matrix A." << endl;
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            cout << "Enter A[" << i + 1 << "][" << j + 1 << "] element: "; // User-friendly indexing
            cin >> a[i][j];
        }
    }

    cout << "Now enter the elements of matrix B." << endl;
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            cout << "Enter B[" << i + 1 << "][" << j + 1 << "] element: "; // User-friendly indexing
            cin >> b[i][j];
        }
    }

    cout << endl;

    cout << "Matrix A:" << endl;
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            cout << setw(10) << a[i][j];
        }
        cout << endl;
    }

    cout << endl << setw(15) << "-" << endl << endl; // Subtraction symbol

    cout << "Matrix B:" << endl;
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            cout << setw(10) << b[i][j];
        }
        cout << endl;
    }

    cout << endl << setw(15) << "=" << endl << endl;

    cout << "Matrix C (A - B):" << endl;
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            c[i][j] = a[i][j] - b[i][j]; // Subtraction
            cout << setw(10) << c[i][j];
        }
        cout << endl;
    }

    return 0;
}