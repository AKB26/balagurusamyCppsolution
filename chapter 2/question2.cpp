#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "Enter two numbers : ";
    cin >> n1 >> n2;
    if (n1 > n2)
    {
        cout << n1 << " is greater than "<< n2 << endl;
    }
    else if(n2>n1)
    {
        cout << n2 << " is greater than " << n1 << endl;
    }
    else{
        cout<<"Both numbers are equal"<<endl;
    }
}