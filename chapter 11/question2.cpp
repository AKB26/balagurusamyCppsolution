#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    cout<<"\n\n";
    ifstream fi;
    fi.open("teleName.txt");
    string name; int phone;
    while (fi.eof()==0){
    fi>> name >> phone;
    cout <<left  << setw(40) << name << right << setw(12) << phone <<endl;
    }
    return 0;
}