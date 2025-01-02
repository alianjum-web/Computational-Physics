#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double x, y, z, b;

    b = sqrt(3.0) / 2.0; // Use 3.0 and 2.0 for double division
    z = 0;

    cout << "The coordinates are as follows:" << endl;
    cout << "X\t\tY\t\tZ" << endl;

    for (y = -3; y <= 3; y++) {
        if (fabs(y + 3) < 1e-6 || fabs(y - 3) < 1e-6) { // y == -3 or y == 3
            for (x = -0.5; x <= 0.5; x++) {
                cout << fixed << setprecision(4) << x << "\t\t" << y * b << "\t\t" << z << endl;
            }
        } else if (fabs(y + 2) < 1e-6 || fabs(y) < 1e-6 || fabs(y - 2) < 1e-6) { // y == -2, 0, or 2
            for (x = -2; x <= 2; x++) {
                if (fabs(x) > 1e-6) { // x != 0
                    cout << fixed << setprecision(4) << x << "\t\t" << y * b << "\t\t" << z << endl;
                }
            }
        } else if (fabs(y + 1) < 1e-6 || fabs(y - 1) < 1e-6) { // y == -1 or y == 1
            for (x = -2.5; x <= 2.5; x++) {
                if (fabs(x + 1.5) > 1e-6 && fabs(x - 1.5) > 1e-6) { // x != -1.5 and x != 1.5
                    cout << fixed << setprecision(4) << x << "\t\t" << y * b << "\t\t" << z << endl;
                }
            }
        }
    }

    return 0;
}