#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

#define f(x) (x * x * x - 2 * x - 5)
#define F(x) (3 * x * x - 2)

float Newton(float initial_val, float final_val, float tolerance, int iterate) {
    int no_of_iteration = 0;
    float x0, x, diff;

    if (f(initial_val) * f(final_val) > 0) {
        cout << "Roots does not lie between " << initial_val << " and " << final_val << endl;
        cout << "Please enter another interval" << endl;
        return NAN; // Return NaN to signal an error
    } else if (fabs(f(initial_val)) < fabs(f(final_val))) {
        x0 = initial_val;
    } else {
        x0 = final_val;
    }

    do {
        x = x0 - (f(x0) / F(x0));
        diff = fabs(x - x0); // Correct difference calculation
        x0 = x;
        no_of_iteration++;
    } while ((no_of_iteration < iterate) && (fabs(f(x)) > tolerance) && (diff > tolerance));

    cout << "Number of iterations: " << no_of_iteration << endl;
    return x;
}

int main() {
    float a, b, t, sol;
    int n;

    cout << "Enter the initial value: ";
    cin >> a;
    cout << "Enter the final value: ";
    cin >> b;
    cout << "Enter the tolerance: ";
    cin >> t;
    cout << "Enter the maximum number of iterations: ";
    cin >> n;

    sol = Newton(a, b, t, n);

    if (!isnan(sol)) {
        cout << fixed << setprecision(6); // Set precision for output
        cout << "The root is " << sol << endl;
    }

    return 0;
}