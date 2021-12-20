#include <iostream>
using namespace std;
class DB;
class DM
{
    float distM;
    float result;
    //metres&cm
public:
    DM();
    friend void addDist(DM dx, DB dy);
    float showRes() { return result; }
};
class DB
{
    float distF;
    float result;
    //feet&inches
public:
    DB();
    friend void addDist(DM dx, DB dy);
    float showRes() { return result; }
};

DM::DM()
{
    cout << "\nEnter  distance(Metres):  ";
    cin >> distM;
}

DB::DB()
{
    cout << "\nEnter  distance(Feet):  ";
    cin >> distF;
}

void addDist(DM dx, DB dy)
{
    int ch;
    float res;
    cout << "\n1.Metre  Format\n2.Feet-Inch  Format\n\nChoice(1  or  2):  ";
    cin >> ch;
    if (ch == 1)
    {
        dx.result = (dy.distF / 3.28) + dx.distM;
        cout << "RESULT:  " << dx.showRes() << "  Metres" << endl;
    }
    else if (ch == 2)
    {
        dy.result = (dx.distM * 3.28) + dy.distF;
        cout << "RESULT:  " << dy.showRes() << "  Feet" << endl;
    }
}

int main()
{
    DM d1;
    DB d2;
    addDist(d1, d2);
    return 0;
}
