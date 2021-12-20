#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float xd, x;
    int n, i;

    cout << " \nENTER VALUE OF X (in degrees) : ";
    cin >> xd;
    cout << " \nENTER VALUE OF n              : ";
    cin >> n;

    x = (xd * 3.14) / 180;
    cout << " \nValue of x in radians = " << x;

    float sum = x;
    int sign = -1;
    int fact = 1;
    for (i = 3; i <= n; i += 2){
        fact = fact * i * (i - 1);
        sum = sum + sign * pow(x, i) / fact;
        sign *= -1;
    }
    cout<<endl;
    cout << " \nTHE VALUE OF SIN " << xd << " = " << sum;
    return 0;
}