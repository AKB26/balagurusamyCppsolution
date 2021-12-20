#include <iostream>
using namespace std;
void division(int a, int b){
    try{
        if (b == 0)
            throw b;
        else
            cout << "Division = " << (float)a / b << "\n";
    }
    catch (int){
        cout << "Error Occurred\n";
        throw;
    }
}
int main(){
    int n1, n2;
    cout << "\n\nEnter the value of two numbers : ";
    cin >> n1 >> n2;
    try{
        division(n1, n2);
    }
    catch (int){
        cout << "Caught an exception as rethrowing \n";
    }
    return 0;
}