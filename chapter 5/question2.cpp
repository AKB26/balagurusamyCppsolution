#include <iostream>
using namespace std;
class vector{
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
    float modif(){
        int pos;
        float elm;
        cout << "Enter  Position  to  modify:  ";
        cin >> pos;
        cout << "Enter  Element:  ";
        cin >> elm;
        vp[pos - 1] = elm;
        return vp[pos - 1];
    }
    void mult(){
        float elm;
        cout << "\n\nEnter  Element  to  Multiply:  ";
        cin >> elm;
        for (int i = 0; i < size; i++)
            vp[i] = elm * vp[i];
    }
    void show(){
        cout << "\n(";
        for (int i = 0; i < size; i++)
        {
            if (i <= size - 1)
                cout << vp[i] << ",";
        }
        cout << ")";
    }
} v;

int main(){
    v.setData();
    v.modif();
    v.show();
    v.mult();
    v.show();
    return 0;
}
