#include <iostream>
#include <iomanip> // For formatting (optional, but recommended)

using namespace std;

int main() {
    int x, y, z;

    cout << "The coordinates are as follows: " << endl;
    cout << "X\tY\tZ" << endl; // Header row

    for (x = 0; x <= 1; x++) {
        for (y = 0; y <= 1; y++) {
            for (z = 0; z <= 1; z++) {
                cout << x << "\t" << y << "\t" << z << endl;
            }
        }
    }

    return 0;
}