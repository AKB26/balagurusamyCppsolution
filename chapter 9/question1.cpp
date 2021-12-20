#include<bits\stdc++.h>
using namespace std;
class shape{
public:
    double n1, n2;
    void get_data()
    {
        cin >> n1 >> n2;
    }
    double get_n1() { return n1; }
    double get_n2() { return n2; }
    virtual void displan2_area() {}
};
class triangle : public shape{
public:
    void displan2_area(){
        double a;
        a = (n1 * n2) / 2;
        cout << " Area of triangle = " << a << endl;
    }
};
class rectangle : public shape{
public:
    void displan2_area(){
        double a;
        a = n1 * n2;
        cout << " Area of rectangle = " << a << endl;
    }
};
int main(){

    shape *s[2];
    triangle t;
    s[0] = &t;
    rectangle r;
    s[1] = &r;
    cout << " Enter the value of n1 & n2 for triangle: ";
    s[0]->get_data();
    cout << " Enter the value of n1 & n2 for rectangle: ";
    s[1]->get_data();
    s[0]->displan2_area();
    s[1]->displan2_area();
    return 0;
}