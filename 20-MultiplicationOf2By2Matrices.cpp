#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i, j, A[2][2], B[2][2], C[2][2];

    cout << "Enter the elements of both Matrices below." << endl;

    cout << "For Matrix A" << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << "Enter A[" << i + 1 << "][" << j + 1 << "] element: ";
            cin >> A[i][j];
        }
    }

    cout << "For Matrix B" << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << "Enter B[" << i + 1 << "][" << j + 1 << "] element: ";
            cin >> B[i][j];
        }
    }

    cout << endl;

    cout << "Matrix A:" << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << setw(10) << A[i][j];
        }
        cout << endl;
    }

    cout << endl << setw(15) << "X" << endl;

    cout << "Matrix B:" << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << setw(10) << B[i][j];
        }
        cout << endl;
    }

    cout << endl << setw(15) << "=" << endl << endl;

    C[0][0] = (A[0][0] * B[0][0]) + (A[0][1] * B[1][0]);
    C[0][1] = (A[0][0] * B[0][1]) + (A[0][1] * B[1][1]);
    C[1][0] = (A[1][0] * B[0][0]) + (A[1][1] * B[1][0]);
    C[1][1] = (A[1][0] * B[0][1]) + (A[1][1] * B[1][1]);

    cout << "Matrix C (A * B):" << endl;
    cout << setw(10) << C[0][0] << setw(10) << C[0][1] << endl;
    cout << setw(10) << C[1][0] << setw(10) << C[1][1] << endl;

    return 0;
}