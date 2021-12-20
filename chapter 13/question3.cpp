#include <iostream>
#define size 5
using namespace std;
void multipleCatch(int n){
    float arr[size];
    try{
        if (n > size)
            throw(n);
        else if (n <= 0)
            throw(0.01);
        else
        {
            cout <<"Enter " << n <<"elements one by one \n";
            for (int i = 0; i < n; i++)
                cin >> arr[i];
            cout << " Now contents  of arr[" << n << "]: \n";
            for (int i = 0; i < n; i++)
                cout << arr[i] << "   ";
        }
    }

    catch (...){
        cout << "Exception occurred \n";
    }
}
int main(){
    cout<<"\n\n";
    int s;
    cout <<"Enter number of elements: ";
    cin >> s;
    cout<<"\n";
    multipleCatch(s);
    return 0;
}