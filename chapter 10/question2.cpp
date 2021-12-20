#include <bits\stdc++.h>
using namespace std;

class ITEM{
    char name[40];
    int code;
    float cost;

public:
    void get_data(char *n, int c, float co){
        strcpy(name, n);
        code = c;
        cost = co;
    }
    void display();
};
void ITEM::display(){
    cout.precision(2);
    cout.fill('-');
    cout.setf(ios::fixed, ios::floatfield);
    cout.setf(ios::showpoint);
    cout.setf(ios::left, ios::adjustfield);
    cout << setw(40) << name << code;
    cout.setf(ios::right, ios::adjustfield);
    cout << setw(15) << cost << endl;
}
int main()
{
    ITEM arr[5];
    arr[0].get_data("Turbo C++", 1001, 250.95);
    arr[1].get_data("C primer", 905, 95.7);
    arr[2].get_data("algorithm", 1111, 120.5);
    arr[3].get_data("principle of accounting", 2220, 150.85);
    arr[4].get_data("stl by balagurusamy", 6666, 145.00);
    cout << setw(10) << "name" << setw(34) << "code" << setw(15) << "cost" << endl;
    for (int i = 0; i < 60; i++)
        cout << "-";
    cout << endl;
    for (int i = 0; i < 5; i++)
        arr[i].display();
    return 0;
}