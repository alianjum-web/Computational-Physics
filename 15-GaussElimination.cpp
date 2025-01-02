#include <iostream>
#include <cmath>
#include <iomanip> // For output formatting

using namespace std;

int main() {
    int i, j, k, n;
    float a[10][10], b, x[10];

    cout << "Enter the no. of simultaneous equations: ";
    cin >> n;

    cout << "Enter the elements of augmented matrix: " << endl;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= (n + 1); j++) {
            cout << "A[" << i << "," << j << "]=";
            cin >> a[i][j];
        }
    }

    for (i = 1; i <= (n - 1); i++) {
        if (a[i][i] == 0) {
            cout << "Mathematical error! (Division by zero)" << endl;
            return 1; // Indicate an error
        }
        for (j = i + 1; j <= n; j++) {
            b = a[j][i] / a[i][i];
            for (k = 1; k <= (n + 1); k++) {
                a[j][k] = a[j][k] - b * a[i][k];
            }
        }
    }

    x[n] = a[n][n + 1] / a[n][n];

    for (i = (n - 1); i >= 1; i--) {
        x[i] = a[i][n + 1];
        for (j = i + 1; j <= n; j++) {
            x[i] = x[i] - a[i][j] * x[j]; // Corrected calculation
        }
        x[i] = x[i] / a[i][i];
    }

    cout << "After Gauss elimination matrix becomes as" << endl;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= (n + 1); j++) {
            cout << setw(10) << fixed << setprecision(4) << a[i][j] << " "; // Formatted output
        }
        cout << endl;
    }

    cout << "The solution is: " << endl;
    for (i = 1; i <= n; i++) {
        cout << "x(" << i << ")=" << fixed << setprecision(6) << x[i] << endl; // Formatted output
    }

    return 0;
}