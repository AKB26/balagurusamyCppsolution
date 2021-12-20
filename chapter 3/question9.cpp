#include <bits\stdc++.h>
using namespace std;
float variance(int N){
    float xb, xT = 0, x[N], min, minsq = 0, sigma;
    int i;

    cout << "Enter  Observations  Below:  " << endl;
    for (i = 0; i < N; i++)
    {
        cin >> x[i];
        xT += x[i];
    }
    xb = xT / N;

    for (i = 0; i < N; i++)
    {
        min = x[i] - xb;
        minsq += pow(min, 2);
    }
    sigma = minsq / N;
    return sigma;
}
float stdDev(float varF){
    float dev;
    dev = sqrt(varF);
    return dev;
}
int main(){
    cout<<endl;
    int N;
    cout << "Enter  No  of  Observations:  ";
    cin >> N;
    float var, devtn;
    var = variance(N);
    devtn = stdDev(var);
    //testing(N);
    cout << endl
         << "VARIANCE:  " << var << endl
         << "STD  DEVIATION:  " << devtn;
    return 0;
}