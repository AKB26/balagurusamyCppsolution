#include <iostream>
#include <iomanip>
#define pi 3.1416
using namespace std;
class Shape
{
public:
    double n1, n2;

public:
    void get_data(double a, double b)
    {
        n1 = a;
        n2 = b;
    }
    double get_n1() { return n1; }
    double get_n2() { return n2; }
    virtual void displan2_area() {}
};

class triangle : public Shape
{
public:
    void displan2_area()
    {
        double a;
        a = (n1 * n2) / 2;
        cout << " Area of triangle = " << a << endl;
    }
};

class Rectangle : public Shape
{
public:
    void displan2_area()
    {
        double a;
        a = n1 * n2;
        cout << " Area of Rectangle = " << a << endl;
    }
};
class Circle : public Shape
{
public:
    void displan2_area()
    {
        double a;
        a = pi * n1 * n1;
        cout << " Area of Circle = " << a << endl;
    }
};
int main()
{
    Shape *s[3];
    triangle t;
    s[0] = &t;
    Rectangle r;
    s[1] = &r;
    Circle c;
    s[2] = &c;
    double n1, n2;
    cout << " Enter the value of n1 & n2 for triangle: ";
    cin >> n1 >> n2;
    s[0]->get_data(n1, n2);
    cout << " Enter the value of n1 & n2 for Rectangle: ";
    cin >> n1 >> n2;
    s[1]->get_data(n1, n2);
    cout << " Enter the radius of Circle : ";
    double rd;
    cin >> rd;
    s[2]->get_data(rd, 0);
    cout << endl
         << endl;
    s[0]->displan2_area();
    s[1]->displan2_area();
    s[2]->displan2_area();

    return 0;
}