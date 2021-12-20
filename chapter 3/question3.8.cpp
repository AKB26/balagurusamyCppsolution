#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    cout << setw(70) << "TABLE FOR Y = e^-x \n\n";
    float x, y, i, j, k;
    cout << "X";
    for (i = 0.1; i < 1; i += 0.1)
        cout << setw(14) << i;
    cout << endl;

    for (float j = 0; j < 10; j++)
    {
        cout << j << setw(4);
        for (float i = 0; i < 0.9; i += 0.1)
        {
            x = i + j;
            y = exp(-x);
            cout.precision(6);
            cout << setw(14) << y;
        }
        cout << "\n";
    }
    return (0);
}
