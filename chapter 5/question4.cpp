#include <iostream>
using namespace std;
class vector
{
private:
    float *vp;
    int size;

public:
    void setData(){
    cout << "Enter  Size:  ";
    cin >> size;
    vp = new float[size];
    cout << "Enter  Values:-  \n";
    for (int i = 0; i < size; i++)
    {
        cin >> vp[i];
    }
    }
    friend void addition(vector v1, vector v2);
};

void addition(vector v1, vector v2)
{
    float *sum;
    int s;
    if (v1.size > v2.size)
        s = v1.size;
    else
        s = v2.size;
    sum = new float[s];
    cout << "\nRESULT:\n(";
    for (int i = 0; i < s; i++)
    {
        sum[i] = v1.vp[i] + v2.vp[i];
        if (i == s - 1)
            cout << sum[i];
        else
            cout << sum[i] << "  ,  ";
    }
    cout << ")" << endl;
}
int main()
{
    vector v1, v2;
    v1.setData();
    v2.setData();
    addition(v1, v2);
    return 0;
}
