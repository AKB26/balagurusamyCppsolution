#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
class telephone{
    string name;
    long int phone;
public:
    void getval(){
        cin >> name;
        cin >> phone;
    }
    void putval(){
        cout << "NAME" << setw(30) << right << "PHONE" << endl;
        cout << name << setw(30) << right << phone << endl;
    }
};
int main(){
    cout<<"\n\n";
    telephone t[3];
    cout << "Name and Phone" << endl;
    ofstream fo;
    fo.open("tele3.dat", ios::out);
    for (int i = 0; i < 3; i++){
        t[i].getval();
        fo.write((char *)&t[i], sizeof(t));
    }
    cout<<"\n\n";
    fo.close();
    telephone t1[3];
    ifstream fi("tele3.dat");
    while (!fi.eof()){
        for (int i = 0; i < 3; i++){
            fi.read((char *)&t1[i], sizeof(t1));
        }
    }
    for (int i = 0; i < 3; i++){
        t1[i].putval();
    }
    fi.close();
    return 0;
}
