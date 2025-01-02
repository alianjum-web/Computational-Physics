#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float x, y, z;

    cout << "The corner points are:" << endl;
    cout << "X\tY\tZ" << endl;

    for (x = 0; x <= 1; x++) {
        for (y = 0; y <= 1; y++) {
            for (z = 0; z <= 1; z++) {
                cout << fixed << setprecision(1) << x << "\t" << y << "\t" << z << endl;
            }
        }
    }

    cout << "\nThe face-centered points are:" << endl;
    cout << "X\tY\tZ" << endl;

    // Face-centered points (x constant)
    for (x = 0; x <= 1; x++) {
        y = z = 0.5;
        cout << fixed << setprecision(1) << x << "\t" << y << "\t" << z << endl;
    }
    for (x = 0; x <= 1; x++) {
        y = z = 0.5;
        cout << fixed << setprecision(1) << x << "\t" << z << "\t" << y << endl;
    }
    for (x = 0; x <= 1; x++) {
        y = z = 0.5;
        cout << fixed << setprecision(1) << z << "\t" << y << "\t" << x << endl;
    }


    cout << "\nThe points inside the unit cell are:" << endl;
    cout << "X\tY\tZ" << endl;

    for (x = 0.25; x <= 0.75; x += 0.5) {
        for (y = 0.25; y <= 0.75; y += 0.5) {
            for (z = 0.25; z <= 0.75; z += 0.5) {
                // The original conditional logic was very complex and redundant.
                // It's simplified here to print all inner points.
                cout << fixed << setprecision(2) << x << "\t" << y << "\t" << z << endl;
            }
        }
    }

    return 0;
}