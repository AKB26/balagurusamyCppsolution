#include <iostream>
using namespace std;
class FLOAT{
    float data;
public:
    FLOAT(){};
    FLOAT(float d){
        data = d;
    }
    FLOAT operator+(FLOAT f1);
    FLOAT operator-(FLOAT f2);
    FLOAT operator*(FLOAT f3);
    FLOAT operator/(FLOAT f4);
    void display();
};
FLOAT FLOAT::operator+(FLOAT f1){
    FLOAT temp;
    temp.data = data + f1.data;
    return (temp);
}
FLOAT FLOAT::operator-(FLOAT f2){
    FLOAT temp;
    temp.data = data - f2.data;
    return temp;
}
FLOAT FLOAT::operator*(FLOAT f3){
    FLOAT temp;
    temp.data = data * f3.data;
    return temp;
}
FLOAT FLOAT::operator/(FLOAT f4){
    FLOAT temp;
    temp.data = data / f4.data;
    return (temp);
}
void FLOAT::display(){
    cout << data << "\n";
}
int main(){
    cout<<"\n";
    FLOAT n1, n2, n3, n4, n5, n6;
    n1 = FLOAT(2.5);
    n2 = FLOAT(3.1);
    n3 = n1 + n2;
    n4 = n1 - n2;
    n5 = n1 * n2;
    n6 = n1 / n2;
    cout << " F1    = ";
    n1.display();
    cout << " F2    = ";
    n2.display();
    cout << " F1+F2 = ";
    n3.display();
    cout << " F1-F2 = ";
    n4.display();
    cout << " F1*F2 = ";
    n5.display();
    cout << " F1/F2 = ";
    n6.display();
    return 0;
}