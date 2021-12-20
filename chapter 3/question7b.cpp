#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float i, n;
    float sum;
    float val;
    sum = 1.0;
    cout << " \nFORMULA USED :";
    cout << " \n\nSUM= 1 + (1/2)^2 + (1/3)^3 + (1/4)^4 + ................";
    cout << "\nENTER VALUE OF N : ";
    cin >> n;
    for (i = 2; i <= n; i++){

        val = (1 / i);
        cout << "\nval = " << val;
        sum = sum + pow(val, i);
        cout << "\nSUM = " << sum;
    }
    cout<<endl;
    cout << "\nSUM = " << sum;
    return 0;
}