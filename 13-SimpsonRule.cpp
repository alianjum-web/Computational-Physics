#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

#define f(x) (x * x)

float simpson(float initial_val, float final_val, int interval) {
    if (interval % 2 != 0) {
        cout << "Number of intervals must be even for Simpson's rule." << endl;
        return NAN; // Return NaN to indicate an error
    }

    float h, xk, area, sum_odd = 0, sum_even = 0;

    h = (final_val - initial_val) / interval;

    float sum = f(initial_val) + f(final_val);

    for (int k = 1; k < interval; k++) {
        xk = initial_val + k * h;
        if (k % 2 == 0) {
            sum_even += f(xk);
        } else {
            sum_odd += f(xk);
        }
    }

    area = (h / 3) * (sum + 4 * sum_odd + 2 * sum_even);
    return area;
}

int main() {
    float a, b, area;
    int n;

    cout << "Enter the initial value: ";
    cin >> a;
    cout << "Enter the final value: ";
    cin >> b;
    cout << "Enter the number of intervals (must be even): ";
    cin >> n;

    area = simpson(a, b, n);

    if (!isnan(area)) {
        cout << fixed << setprecision(6);
        cout << "The area under the curve is " << area << endl;
    }

    return 0;
}