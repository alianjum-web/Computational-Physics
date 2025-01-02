#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

#define f(x) (x * x * x - 2 * x - 5)

float secant(float initial_val, float final_val, int iterat, float tolerate) {
    float c, interval;
    int iterations = 0;

    if (fabs(f(initial_val)) < tolerate)
        return initial_val;

    if (fabs(f(final_val)) < tolerate)
        return final_val;

    do {
        if (f(final_val) - f(initial_val) == 0) {
            cout << "Division by zero encountered. Choose different initial values." << endl;
            return NAN; // Return NaN to indicate error
        }
        c = (initial_val * f(final_val) - final_val * f(initial_val)) / (f(final_val) - f(initial_val));
        interval = fabs((final_val - initial_val) / 2);

        initial_val = final_val;
        final_val = c;
        iterations++;

    } while ((iterations < iterat) && (fabs(f(c)) > tolerate) && (interval > tolerate));

    cout << "Number of iterations: " << iterations << endl;
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

    result = secant(a, b, n, t);

    if (!isnan(result)) {
        cout << fixed << setprecision(6);
        cout << "The root value is " << result << endl;
    }

    return 0;
}