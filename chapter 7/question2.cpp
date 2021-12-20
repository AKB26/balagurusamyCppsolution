#include <iostream>
#include <math.h>
#define pi 3.1416
using namespace std;
class polar{
    float r, a, x, y;

public:
    polar(){};
    polar(float r1, float a1);
    polar operator+(polar r1);
    void display(void);
};

polar ::polar(float r1, float a1){
    r = r1;
    a = a1 * (pi / 180);
    x = r * cos(a);
    y = r * sin(a);
}

polar polar ::operator+(polar r1)
{
    polar R;

    R.x = x + r1.x;
    R.y = y + r1.y;
    R.r = sqrt(R.x * R.x + R.y * R.y);
    R.a = atan(R.y / R.x);

    return R;
}

void polar::display(){
    cout <<"Radius = " << r << "\nAngle = " << a * (180 / pi) << "\n";
}

int main(){
    cout<<"\n";
    polar P1, P2, P3;
    float r, a;
    cout << " Enter radius and angle : ";
    cin >> r >> a;
    P1 = polar(r, a);
    P2 = polar(8, 45);
    P3 = P1 + P2;
    cout << "P1  \n";
    P1.display();
    cout << "P2  \n ";
    P2.display();
    cout << "P3  \n ";
    P3.display();
    return 0;
}