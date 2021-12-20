#include <iostream>
using namespace std;

class bank{
private:
    char Dname[25];
    int acc_num;
    char type[10];
    int balance_amt;
public:
    void info(){
        cout << "ENTER NAME           : ";
        gets(Dname);
        cout << "ENTER ACCOUNT TYPE   : ";
        gets(type);
        cout << "ENTER ACCOUNT NUMBER : ";
        cin >> acc_num;
        balance_amt = 0;
    }
    void deposit(){
        int a;
        cout << "\nENTER AMOUNT TO DEPOSIT : ";
        cin >> a;
        balance_amt += a;
        cout << "\nAMOUNT DEPOSITED SUCCESSFULLY ..... \n\n";
        cout << "YOUR AMOUNT : " << balance_amt;
    }
    void withdraw(){
        int b;
        cout << "\n\nENTER AMOUNT TO WITHDRAW : ";
        cin >> b;
        balance_amt -= b;
        cout << "\nAMOUNT WITHDRAWN SUCCESSFULLY ..... ";
        cout << " \nYOUR AMOUNT : " << balance_amt;
    }
    void getinfo(){
        cout << "\nNAME             :"
             << Dname;
        cout << "  BALANCE AMOUNT   :"
             << balance_amt;
    }

} c1;
int main(){
    cout << " \n\n";
    c1.info();
    c1.deposit();
    c1.withdraw();
    c1.getinfo();
    return (0);
}