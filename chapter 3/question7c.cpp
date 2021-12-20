// 3.7   3rd cos wala

#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float x, xd;
    int n, i;
    cout << "\nENTER VALUE OF X (in degrees) : ";
    cin >> xd;
    cout << " ENTER VALUE OF n              : ";
    cin >> n;
    x = (xd * 3.14) / 180;
    cout << "\n\n Value of x in radians = " << x;
    float sum = 1;
    int sign = -1;
    int fact = 1;
    for (i = 2; i <= n; i += 2)
    {

        fact = fact * i * (i - 1);

        sum = sum + sign * pow(x, i) / fact;
        sign *= -1;
    }

    cout << "\n\n THE VALUE OF COS " << xd << " = " << sum;

    return 0;
}