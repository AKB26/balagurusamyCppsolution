#include <iostream>
#include <string.h>
using namespace std;
class Bank{
    char name[20];
    int accno;
    char acctype[10];
    float balance;
    float amt;

public:
    Bank()
    {
        cout << "\nEnter Account Holder Name: ";
        cin >> name;
        cout << "Enter Acc Number: ";
        cin >> accno;
        cout << "Enter Acc Type: ";
        cin >> acctype;
        cout << "Enter Initial Balance: ";
        cin >> balance;
        cout << "\nEnter the amount to Deposit: ";
        cin >> amt;
        balance += amt;
        cout << "UPDATED AMOUNT: " << balance << endl;
        cout << "\nEnter amount to withdraw: ";
        cin >> amt;
        if (balance < amt){
            cout << "No Sufficient Balance!" << endl;
        }
        else{
            balance -= amt;
            cout << "UPDATED AMOUNT: " << balance << endl;
        }
    }
} b[10];
int main()
{
    Bank b[10];
    return 0;
}