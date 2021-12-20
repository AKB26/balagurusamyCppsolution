// FOR SWAPPING USING REFERENCE VARIABLES
#include <iostream>
using namespace std;
void swap(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}
int main(){
    int x, y;
    cout << "\nENTER VALUE OF x: ";
    cin >> x;
    cout << "\nENTER VALUE OF y : ";
    cin >> y;
    swap(x, y);
    cout << "\nVALUE OF x : " << x;
    cout << "\nVALUE OF y : " << y;
    cout<<endl;
    return 0;
}