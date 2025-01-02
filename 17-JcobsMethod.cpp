#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int i, j, n, itr, k;
    float a[10][10], x[10], b[10];

    cout << "Enter the no. of equations: ";
    cin >> n;
    cout << "Enter the no. of iterations: ";
    cin >> itr;

    cout << "Enter the elements of augmented matrix:" << endl;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= (n + 1); j++) {
            cout << "a[" << i << "," << j << "]=";
            cin >> a[i][j];
        }
    }

    // Initialize x for the first iteration (important!)
    for (i = 1; i <= n; i++) {
        x[i] = a[i][n + 1] / a[i][i];
    }

    cout << "The solution of ITERATION (1) is as follows:" << endl;
    for (i = 1; i <= n; i++) {
        cout << "\t" << "X(" << i << ")=" << fixed << setprecision(6) << x[i] << endl;
    }

    for (k = 1; k <= (itr - 1); k++) {
        for (i = 1; i <= n; i++) {
            b[i] = 0;
            for (j = 1; j <= n; j++) {
                if (i != j) {
                    b[i] += a[i][j] * x[j];
                }
            }
        }

        cout << "The solution of ITERATION (" << k + 1 << ") is as follows:" << endl;
        for (i = 1; i <= n; i++) {
            x[i] = (a[i][n + 1] - b[i]) / a[i][i]; // Parentheses added for correct order of operations
            cout << "\t" << "X(" << i << ")=" << fixed << setprecision(6) << x[i] << endl;
        }
    }

    return 0;
}