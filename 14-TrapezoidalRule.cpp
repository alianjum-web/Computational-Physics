#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

#define f(x) (x * x)

float trap(float initial_val, float final_val, int interval) {
    float h, xk, area, sum_1, sum_2 = 0;

    h = (final_val - initial_val) / interval;

    sum_1 = (f(initial_val) + f(final_val)) / 2;

    for (int k = 1; k < interval; k++) {
        xk = initial_val + k * h; // Corrected xk calculation
        sum_2 += f(xk);           // Simplified sum_2 accumulation
    }

    area = h * (sum_1 + sum_2);
    return area;
}

int main() {
    float a, b, area;
    int n;

    cout << "Enter the initial value: ";
    cin >> a;
    cout << "Enter the final value: ";
    cin >> b;
    cout << "Enter the number of intervals: "; // More descriptive prompt
    cin >> n;

    area = trap(a, b, n); // Store the returned value

    cout << fixed << setprecision(6); // Set precision for output
    cout << "The area under the curve is " << area << endl;

    return 0;
}