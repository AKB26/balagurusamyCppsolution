#include <iostream>
using namespace std;
void vectorForm(int size){
    int *vect = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> vect[i];
    }
    cout << "\nVECTOR = (";
    for (int i = 0; i < size; i++)
    {
        if (i < size - 1)
            cout << vect[i] << ",";
        else
            cout << vect[i] << ")";
    }
}
int main(){
    int size;
    cout<<endl;
    cout << "Enter Size of Vector: ";
    cin >> size;
    vectorForm(size);
    cout<<endl;
    return 0;
}