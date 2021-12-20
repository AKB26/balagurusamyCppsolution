#include <iostream>
using namespace std;
double x, y;
int a;

void div(double x, double y)
{
    double res;
    try
    {
        if (y == 0)
        {
            a = y;
            throw a;
        }
        res = x / y;
        cout << "Result: " << res;
    }
    catch (int)
    {
        cout << "Division by 0 error" << endl;
    }
}

void read()
{
    cout << "Enter two numbers: " << endl;
    cin >> x >> y;
    try
    {
        if (cin.fail())
        {
            throw "!Data";
        }
        div(x, y);
    }
    catch (const char *s)
    {
        cout << "Invalid Data Type" << endl;
    }
}

int main()
{
    cout << "\n\n";
    read();
    cout << "\n\n";
    return 0;
}
