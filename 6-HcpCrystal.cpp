#include <iostream>
#include <iomanip>
#include <cmath> // Include for fabs

using namespace std;

int main() {
    double x, y, z;

    cout << "The coordinates are as follows:" << endl;
    cout << "X\t\tY\t\tZ" << endl;

    for (z = 0; z <= 2; z++) {
        if ((z == 0) || (z == 2)) {
            for (y = -0.866; y <= 0.866; y += 0.866) {
                if (fabs(y - (-0.866)) < 1e-6 || fabs(y - 0.866) < 1e-6) { // Corrected comparison
                    for (x = -0.5; x <= 0.5; x++) {
                        cout << fixed << setprecision(3) << x << "\t\t" << y << "\t\t" << z << endl;
                    }
                } else if (fabs(y - 0.0) < 1e-6) { // Handle y = 0 case
                    for (x = -1.0; x <= 1.0; x++) {
                        cout << fixed << setprecision(3) << x << "\t\t" << y << "\t\t" << z << endl;
                    }
                }
            }
        }
    }

    return 0;
}