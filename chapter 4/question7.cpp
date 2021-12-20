#include <iostream>
using namespace std;
double power(double m, int n = 2){
    double res = 1;
    for (int i = 1; i <= n; i++)
        res *= m;
    return res;
}
int main(){
    double m;
    int n;
    cout << "Enter  a  base  and  an  exponent:  ";
    cin >> m >> n;
    cout << "Result:  " << power(m, n);
    cout << "\n\nEnter  a  base  [IN  CASE  OF  NO  EXPONENT]:  ";
    cin >> m;
    cout << "Result:  " << power(m);
}
