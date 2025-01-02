#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float x, y, z;

    cout << "The corner points are as follows:" << endl;
    cout << "X\tY\tZ" << endl;

    for (x = 0; x <= 3; x++) {
        for (y = 0; y <= 3; y++) {
            for (z = 0; z <= 3; z++) {
                cout << fixed << setprecision(1) << x << "\t" << y << "\t" << z << endl;
            }
        }
    }

    cout << "\nThe face-centered points are as follows:" << endl;
    cout << "X\tY\tZ" << endl;

    // Face-centered points where x is constant
    for (x = 0; x <= 3; x++) {
        for (y = 0.5; y <= 2.5; y += 1.0) {
            for (z = 0.5; z <= 2.5; z += 1.0) {
                cout << fixed << setprecision(1) << x << "\t" << y << "\t" << z << endl;
            }
        }
    }

    // Face-centered points where y is constant
    for (y = 0; y <= 3; y++) {
        for (x = 0.5; x <= 2.5; x += 1.0) {
            for (z = 0.5; z <= 2.5; z += 1.0) {
                cout << fixed << setprecision(1) << x << "\t" << y << "\t" << z << endl;
            }
        }
    }

    // Face-centered points where z is constant
    for (z = 0; z <= 3; z++) {
        for (x = 0.5; x <= 2.5; x += 1.0) {
            for (y = 0.5; y <= 2.5; y += 1.0) {
                cout << fixed << setprecision(1) << x << "\t" << y << "\t" << z << endl;
            }
        }
    }

    return 0;
}