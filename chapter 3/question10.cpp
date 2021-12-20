#include <iostream>
using namespace std;
void fun(){
    string name;
    float unit, price, extra;
    cout << "\nEnter  Consumer's  name:";
    // gets(name);
    cin>>name;
    cout << "\nEnter  units  of  electricity  used:";
    cin >> unit;
    if (unit <= 100){
        price = (60 * unit) / 100 + 50;
        // puts(name);
        cout<<name;

        cout << "\nUnits  =  " << unit << "	Rate  =  60  paise/unit  \n  m eter  charges  =  50  \n  price  =  " << price;
    }
    else if (unit > 100 && unit <= 300){

        extra = unit - 100;
        price = (60 * 100) / 100 + (80 * extra) / 100 + (50);
        // puts(name);
        cout<<name;
        cout << "\nUnits  =  " << unit << "\nRate  =  60  paise/unit  for 100 units and 80 paise / unit above  \n meter charges = 50\n price = "<< price;
    }
    else if (unit > 300)
    {
        price = (90 * unit) / 100 + 50;
        // puts(name);
        cout<<name;
        cout << "\nUnits  =  " << unit << "	Rate  =  90  paise/unit  \n meter  charges  =  50  \n";
    }

    if (price > 300)
    {

        price = price + (0.15 * price);
        cout << "\nELECTRICITY  BILL  PRICE  :  " << price;
    }

    else
        cout << "\nELECTRICITY  BILL  PRICE  :  " << price;
}

int main()
{
    int n;
    cout<<"Enter number of users : "; cin>>n;
    for(int i = 0;i<n;i++){
        cout<<endl;
        fun();
    }
    return (0);
}
