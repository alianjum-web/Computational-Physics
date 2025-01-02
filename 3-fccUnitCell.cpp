#include <iostream>

using namespace std;

int main()
{
    float x, y, z;

    cout << "The corner points are:" << endl;
    cout << "X" << "\t" << "Y" << "\t" << "Z" << endl;

    for (x = 0; x <= 1; x++)
    {
        for (y = 0; y <= 1; y++)
        {
            for (z = 0; z <= 1; z++)
            {
                cout << x << "\t" << y << "\t" << z << endl;
            }
        }
    }

    cout << "The face-centered points are:" << endl;
    cout << "X" << "\t" << "Y" << "\t" << "Z" << endl;

    for (x = 0; x <= 1; x++)
    {
        y = z = 0.5;
        cout << x << "\t" << y << "\t" << z << endl;
    }

    for (y = 0; y <= 1; y++)
    {
        x = z = 0.5;
        cout << x << "\t" << y << "\t" << z << endl;
    }

    for (z = 0; z <= 1; z++)
    {
        x = y = 0.5;
        cout << x << "\t" << y << "\t" << z << endl;
    }

    return 0;
    // getCh();
}