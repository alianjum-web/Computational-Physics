#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float x, y, z;
    float Au = 4.08, Ag = 0.41;

    cout << "The corner points are:" << endl;
    cout << "X\tY\tZ" << endl;

    for (x = 0; x <= 1; x++) {
        for (y = 0; y <= 1; y++) {
            for (z = 0; z <= 1; z++) {
                cout << fixed << setprecision(2) << Au * x << "\t" << Ag * y << "\t" << Au * z << endl;
            }
        }
    }

    cout << "\nThe face-centered points are:" << endl;
    cout << "X\tY\tZ" << endl;

    // Face-centered points (x constant, y and z = 0.5)
    for (x = 0; x <= 1; x++) {
        y = z = 0.5;
        cout << fixed << setprecision(2) << Au * x << "\t" << Ag * y << "\t" << Au * z << endl;
    }

    // Face-centered points (y constant, x and z = 0.5)
    for (y = 0; y <= 1; y++) {
        x = z = 0.5;
        cout << fixed << setprecision(2) << Au * x << "\t" << Ag * y << "\t" << Au * z << endl;
    }

    // Face-centered points (z constant, x and y = 0.5)
    for (z = 0; z <= 1; z++) {
        x = y = 0.5;
        cout << fixed << setprecision(2) << Au * x << "\t" << Ag * y << "\t" << Au * z << endl;
    }

    return 0;
}