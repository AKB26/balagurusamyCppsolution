#include <iostream>
using namespace std;
double power(double m, int n = 2)
{
    double res = 1;
    for (int i = 1; i <= n; i++)
        res *= m;
    return res;
}
double power(int m, int n = 2)
{
    double res = 1;
    for (int i = 1; i <= n; i++)
        res *= m;
    return res;
}
int main()
{
    int n, m;
    cout << "\nEnter a base[DOUBLE] and an exponent[INT]: ";
    cin >> m >> n;
    cout << "Result: " << power(m, n);
    cout << "\n\nEnter  a  base[INT]  and  an  exponent[INT]:  [FUNCTION  O VERLOADING]:  ";
    cin >> m >> n;
    cout << "Result:  " << power(m, n);
}