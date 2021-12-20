#include <iostream>
using namespace std;
int main(){
    float frh, cel;
    cout<<endl;
    cout << " Enter temperature in Fahrenheit : ";
    cin >> frh;
    cel = ((frh * 5.0) - (5.0 * 32)) / 9;cout<<endl;
    cout << " The temperature in Fahrenheit : " << frh << endl; cout<<endl;
    cout << " The temperature in Celsius : " << cel << endl;
    cout << endl;
    return 0;
}