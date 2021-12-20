#include <iostream>
using namespace std;
class bank_account
{
private:
    string name;
    string accountNumber;
    string accountType;
    int balance;

public:
    void setDetails(string n, int ac, string acctype, float bal)
    {
        name = n;
        accountNumber = ac;
        accountType = acctype;
        balance = bal;
    }
    void deposit(int amount)
    {
        balance += amount;
    }
    int  withdraw(int  amt)
    {
        if (amt > balance)
        {
            cout << "This  amount  is  not  available  in  your  account" << endl;
        }
        else
        {
            cout << "Amount  withdrawn  :  " << amt << endl;
            balance -= amt;
            return amt;
        }
    }
    void details()
    {
        cout << "Name  of  the  account  holder  :  " << name << endl;
        cout << "Balance  in  account  :	" << balance << endl;
    }
};
int main()
{
    bank_account b;
    char name[20], atype[10]; int acno; float bal, amt;
    cout<<"\nEnter Account Holder Name: ";cin>>name;
        cout<<"Enter Acc Number: "; cin>>acno;
        cout<<"Enter Acc Type: "; cin>>atype;
        cout<<"Enter Initial Balance: ";cin>>bal;
        b.setDetails(name, acno, atype, bal);

        cout<<"\nEnter the amount to Deposit: "; cin>>amt;
        cout<<"UPDATED AMOUNT: "<<b.deposit(amt)<<endl;

        cout<<"\nEnter amount to withdraw: "; cin>>amt;
        if(b.withdraw(amt)==1){cout<<"No sufficient Amount!!"; exit(1);}
        b.details();
}