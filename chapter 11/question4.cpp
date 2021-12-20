#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <string.h>
using namespace std;

class telephone
{
    string name;
    long int phone;

public:
    void getval()
    {
        cin >> name;
        cin >> phone;
    }
    void putval()
    {
        cout << "NAME" << setw(30) << right << "PHONE" << endl;
        cout << name << setw(30) << right << phone << endl;
    }
    string retname()
    {
        return name;
    }
    long int retnum()
    {
        return phone;
    }
};
telephone t2[10];
telephone t[10];
int n;
void numsearch(string);
void namesearch(long int);
void updaterec(string);
int main(){
    cout << "\nEnter Number of Records: ";
    cin >> n;
    cout << "\n----------Name and Telephone----------" << endl;
    ofstream fo;
    fo.open("teleSearch.dat", ios::out);
    for (int i = 0; i < n; i++){
        t[i].getval();
        fo.write((char *)&t[i], sizeof(t[i]));
    }
    fo.close();
    cout << "\n\n";
    ifstream fi("teleSearch.dat");
    while (!fi.eof()){
        for (int i = 0; i < n; i++){
            fi.read((char *)&t2[i], sizeof(t2[i]));
        }
    }
    for (int i = 0; i < n; i++){
        t2[i].putval();
    }
    fi.close();

    string inpname;
    long int inpphone;
    int tch;

    do{
        cout << "\n1.Search Phone no of a Person\n2.Search Name of a Person\n3.Update Phone no.\n4.Exit" << endl;
        cin >> tch;
        switch (tch){
        case 1:
            cout << "\nEnter name: ";
            cin >> inpname;
            numsearch(inpname);
            break;
        case 2:
            cout << "\nEnter contact num: ";
            cin >> inpphone;
            namesearch(inpphone);
            break;
        case 3:
            cout << "\nEnter name: ";
            cin >> inpname;
            updaterec(inpname);
            break;
        }
    } while (tch != 4);
    return 0;
}
void numsearch(string inpname){
    int found = 0;
    for (int i = 0; i < n; i++){
        if (inpname == t2[i].retname()){
            cout << "Rec found!! \n"
                 << t2[i].retnum() << endl;
            found = 1;
        }
    }
    if (found == 0)
        cout << "No Record!!";
}
void namesearch(long int inpphone){
    int found = 0;
    for (int i = 0; i < n; i++){
        if (inpphone == t2[i].retnum()){
            cout << "Rec found!! \n " << t2[i].retname() << endl;
            found = 1;
        }
    }
    if (found == 0)
        cout << "No Record found!!";
}
void updaterec(string chName){
    int found = 0, i;
    long int phno;
    for (i = 0; i < n; i++){
        if (chName == t2[i].retname())
            found = 1;
    }
    if (found == 0)
        cout << "No Such Record!!" << endl;
    else{
        cout << "\nEnter Fresh Details: " << endl;
        ofstream fo;
        fo.open("teleSearch.dat", ios::out);
        fo.seekp((sizeof(t2[i]) * i + 1) - 1);
        t2[i].getval();
        fo.write((char *)&t2[i], sizeof(t2[i]));
        fo.close();
        cout << "\nRecord has been Updated Successfully!" << endl;
        t2[i].putval();
    }
}
