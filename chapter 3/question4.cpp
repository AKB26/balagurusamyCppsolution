#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
    float value, pf;
    int i;
    int n = 10;
    float p[10] = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000};
    float r[11] = {0.10, 0.11, 0.12, 0.13, 0.14, 0.15, 0.16, 0.17, 0.18, 0.19, 0.20};
    cout << "\n\n         n=1";
    for (int i = 2; i <= 10; i++)
        cout << setw(9) << "n=" << i;
    cout << "\n";
    cout << "\n";

    for (i = 0; i <= 10; i++){
        cout << "\n\n";
        cout << setw(-6) << "r=" << r[i] << "  ";
        for (int j = 0; j < 10; j++){
            if (j == 0)
                pf = p[i];
            value = pf * (1 + r[i]);

            cout.precision(2);
            cout.setf(ios::fixed, ios::floatfield);
            cout << value << setw(10);
            pf = value;
        }
        cout << "\n";
    }
    return 0;
}