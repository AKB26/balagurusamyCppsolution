#include <iostream>
using namespace std;
class temp{
    float frh, cel;
    public:
    temp(){
        frh = 0.0;
        cel = 0.0;
    }
    void getTemp(){
        cout << " Enter temperature in Fahrenheit : ";
        cin >> frh;
    }
    void calTemp(){
        cel = ((frh * 5.0) - (5.0 * 32)) / 9;
        cout << endl;
        cout << " The temperature in Fahrenheit : " << frh << endl;
        cout << endl;
        cout << " The temperature in Celsius : " << cel << endl;
        cout << endl;
    }
};
int main(){
    temp obj;
    obj.getTemp();
    obj.calTemp();

}