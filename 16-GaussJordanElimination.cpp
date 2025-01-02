#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int i, j, k, n;
    float a[10][10], b, x[10];

    cout << "Enter the no. of equations: ";
    cin >> n;

    cout << "Enter the elements of augmented matrix:" << endl;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= (n + 1); j++) {
            cout << "A[" << i << "," << j << "]=";
            cin >> a[i][j];
        }
    }

    for (i = 1; i <= n; i++) { // Iterate through rows
        if (a[i][i] == 0) {
            cout << "Mathematical error! (Division by zero)" << endl;
            return 1; // Indicate an error
        }

        for (j = 1; j <= n; j++) { // Iterate through other rows
            if (i != j) {
                b = a[j][i] / a[i][i];
                for (k = 1; k <= (n + 1); k++) {
                    a[j][k] -= b * a[i][k];
                }
            }
        }
    }

    // Solution extraction (simplified)
    for (i = 1; i <= n; i++) {
        x[i] = a[i][n + 1] / a[i][i];
    }

    cout << "After Gauss Jordan, matrix becomes as:" << endl;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= (n + 1); j++) {
            cout << setw(10) << fixed << setprecision(4) << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << "The solution is:" << endl;
    for (i = 1; i <= n; i++) {
        cout << "x(" << i << ")=" << fixed << setprecision(6) << x[i] << endl;
    }

    return 0;
}