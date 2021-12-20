#include <iostream>
#include <math.h>
#define pi 3.1416
using namespace std;
class conv_point{
    float x, y, r, theta;

public:
    void set_xy();
    void set_r_theta();
    void show_xy();
    void show_r_theta();
    void conversion(int t);
};
void conv_point::set_xy(){
    cout << "Enter the value of x & y : ";
    cin >> x >> y;
}
void conv_point::set_r_theta(){
    cout << "Enter the value of r & theta :";
    cin >> r >> theta;
    theta = (pi / 180) * theta;
}

void conv_point::show_xy(){
    cout << " CERTECIAN FORM :\n"
         << "x = " << x << "\n"
         << "y = " << y << "\n";
}
void conv_point::show_r_theta(){
    cout << "POLAR FORM :\n"
         << "R = " << r << "\n"
         << "Theta = " << (180 / pi) * theta << " degree \n";
}

void conv_point::conversion(int t){
    if (t == 1){
        r = sqrt(x * x + y * y);

        if (x != 0){
            theta = atan(y / x);
            show_r_theta();
        }
        else{
            cout << "POLAR FORM :\n"
                 << "R = " << r << "\n"
                 << "Theta = 90 degree\n";
        }
    }
    else if (t == 2){
        x = r * cos(theta);
        y = r * sin(theta);
        show_xy();
    }
}
int main(){
    cout<<"\n\n";
    conv_point obj;
    int test;
    cout << "Press 1 to input Certecian point \n"
         << "Press 2 to input Polar point \n "
         << "Select : ";
    cin >> test;
    if (test == 1)
        obj.set_xy();
    else if (test == 2)
        obj.set_r_theta();
    obj.conversion(test);

    return 0;
}