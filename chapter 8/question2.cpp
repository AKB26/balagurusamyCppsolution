#include <bits\stdc++.h>
using namespace std;
#define minimum 500
#define service_charge 100
#define r 0.15
class account
{
protected:
        char name[100];
        int ac_number;
        char ac_type[100];

public:
        account(char *n, char *t, int no);
};
account::account(char *n, char *t, int no)
{
        strcpy(name, n);
        strcpy(ac_type, t);
        ac_number = no;
}

class cur_acct : public account
{
private:
        float balance, d, w;

public:
        void withdraw(float ww);
        void deposit(float d) { balance = d; }
        cur_acct(char *n, char *t, int number, float dp, float wd) : account(n, t, number)
        {
                d = dp;
                w = wd;
                deposit(d);
                withdraw(w);
        }
        void display();
};

void cur_acct::withdraw(float ww)
{

        if (balance < ww)
                cout << " sorry your balance is less than your withdrawal amount \n";
        else{
                balance -= ww;
                if (balance < minimum){
                        cout << "\n your current balance is :" << balance << " which is less than" << minimum << "\n your account is discharged by " << service_charge << "TK \n"
                             << " You must store " << minimum << "TK to avoid discharge \n "
                             << " Do you want to withdraw ? press 1 for yes press 0 for no \n"
                             << " what is your option ?";
                        int test;
                        cin >> test;
                        if (test == 0)
                                balance += w;
                }
                else
                        ;
        }
}
void cur_acct::display(){
        cout << "\n Now balance = " << balance << "\n";
}
class sav_acct : public account{
        float balance;
        int d, m, y;

public:
        void deposite(float d)
        {
                balance = d;
                set_date();
        }
        void withdraw(float w);
        void display();
        void set_date()
        {
                d = 12;
                m = 1;
                y = 2010;
        }
        void interest();
        sav_acct(char *n, char *t, int number, float dp, float wd) : account(n, t, number)
        {
                float d, w;
                d = dp;
                w = wd;
                deposite(d);
                interest();
                withdraw(w);
        }
};
void sav_acct::withdraw(float w)
{
        if (balance < w)
                cout << " sorry your balance is less than your withdrawal amount \n";
        else
        {
                balance -= w;
                if (balance < minimum)
                {
                        cout << "\n your current balance is :" << balance << " which is less than" << minimum << "\n your account is discharged by " << service_charge << "TK \n"
                             << " You must store " << minimum << "TK to avoid discharge \n "
                             << " Do you want to withdraw ? press 1 for yes press 0 for no \n"
                             << " what is your option ?";
                        int test;
                        cin >> test;
                        if (test == 0)
                                balance += w;
                }
                else
                        ;
        }
}
void sav_acct::display()
{
        cout << "\n Now balance = " << balance;
}
void sav_acct::interest()
{
        int D[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int d1, y1, m1;
        cout << " Enter today's date :(i,e day,month,year) ";
        cin >> d1 >> m1 >> y1;
        int iday, fday;
        iday = d;
        fday = d1;
        for (int i = 0; i < m1; i++)
        {
                fday += D[i];
        }
        for (int i = 0; i < m; i++)
        {
                iday += D[i];
        }
        int tday;
        tday = fday - iday;
        float ty;
        ty = float(tday) / 365 + y1 - y;
        balance = balance * pow((1 + r), ty);
}

int main()
{

        float d;
        cout << " Enter customer name :";
        char name[100];
        gets(name);
        cout << " Enter account number :";
        int number;
        cin >> number;
        cout << " Enter your deposit amount : ";
        cin >> d;

        cout << " Enter your withdrawal amount :";
        float w;
        cin >> w;
        //cur_acct s("current",name,number,d,w);
        //s.display();
        sav_acct c("savings", name, number, d, w);
        c.display();
        return 0;
}