#include <iostream>
#include <iomanip> // For setw

using namespace std;

int main() {
    float x, y, z;

    cout << "The corner points are as follows:" << endl;
    cout << "X\tY\tZ" << endl;

    for (x = 0; x <= 1; x++) {
        for (y = 0; y <= 1; y++) {
            for (z = 0; z <= 1; z++) {
                cout << fixed << setprecision(1); // Format to one decimal place
                cout << x << "\t" << y << "\t" << z << endl;
            }
        }
    }

    cout << "The body-centered point is as follows:" << endl;
    cout << "X\tY\tZ" << endl;

    x = y = z = 0.5;
    cout << fixed << setprecision(1); // Format to one decimal place
    cout << x << "\t" << y << "\t" << z << endl;

    return 0;
}