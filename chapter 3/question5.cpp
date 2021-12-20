//3.5  votes
#include <iostream>
using namespace std;
int main(){

    int a, b, c, d, e, i, s, array[5];
    a = 0; b = 0;c = 0;d = 0;e = 0;s = 0;
    cout << "\n\nELECTION  \n \n";
    cout << "CANDIDATE 1\nCANDIDATE 2\nCANDIDATE 3\nCANDIDATE 4\nCANDIDATE 5\n ";
    for (i = 0; i < 5; i++){
        cout <<"YOUR VOTE : ";
        cin >> array[i];
    }
    for (i = 0; i < 5; i++){
        if (array[i] == 1)
            a++;
        if (array[i] == 2)
            b++;
        if (array[i] == 3)
            c++;
        if (array[i] == 4)
            d++;
        if (array[i] == 5)
            e++;
        if (array[i] > 5)
            s++;
    }
    cout << "\nRESULTS :";
    cout << "\nCANDIDATE 1 :  " << a;
    cout << "\nCANDIDATE 2 : " << b;
    cout << "\nCANDIDATE 3 : " << c;
    cout << "\nCANDIDATE 4 : " << d;
    cout << "\nCANDIDATE 5 : " << e;
    cout << "\n\nSPOILT VOTES : " << s;
    return 0;
}