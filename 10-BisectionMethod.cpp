#include <iostream>
#include <cmath>
#include <iomanip> // For setting precision

using namespace std;

// Define the function f(x)
#define f(x) (x * x * x - 2 * x - 5)

// Function to perform bisection method
float bisect(float initial_val, float final_val, int iterat, float tolerate) {
    int no_of_iteration = 0;
    float interval_val, c;

    if (f(initial_val) * f(final_val) >= 0) {
        cout << "Function values at endpoints must have opposite signs." << endl;
        return NAN; // Return Not a Number to indicate an error
    }

    do {
        c = (initial_val + final_val) / 2;

        if (f(initial_val) * f(c) < 0) {
            final_val = c;
        } else {
            initial_val = c;
        }

        no_of_iteration++;
        interval_val = fabs((final_val - initial_val) / 2);

    } while ((no_of_iteration < iterat) && (fabs(f(c)) > tolerate) && (interval_val > tolerate));

    cout << "Number of iterations: " << no_of_iteration << endl;
    return c;
}

int main() {
    float a, b, t, result;
    int n;

    cout << "Enter the initial value: ";
    cin >> a;
    cout << "Enter the final value: ";
    cin >> b;
    cout << "Enter the maximum number of iterations: ";
    cin >> n;
    cout << "Enter the tolerance: ";
    cin >> t;

    result = bisect(a, b, n, t);

    if (!isnan(result)) { // Check if the result is a valid number
        cout << fixed << setprecision(6); // Set precision for output
        cout << "The root value is " << result << endl;
    }

    return 0;
}