#include <bits\stdc++.h>
using namespace std;
#define minimum 500
#define service_charge 100
#define r 0.15
class account
{
protected:
    char name[300];
    int acc_number;
    char acc_type[300];

public:
    void create(char *t);
};
void account::create(char *t)
{
    cout << "Enter customer name : ";
    gets(name);
    strcpy(acc_type, t);
    cout << "Enter account number : ";
    cin >> acc_number;
}
class curr_acc : public account
{
private:
    float balance;

public:
    void deposite(float d);
    void withdraw(float w);
    void display();
};
void curr_acc::deposite(float d)
{
    balance = d;
}
void curr_acc::withdraw(float w)
{
    if (w > balance)
    {
        cout << "Your account does not have that much money!\n";
    }
    else
    {
        balance -= w;
        if (balance < minimum)
        {
            cout << "\nYour balance is : " << balance << " which is less    than" << minimum << "\n your account is discharged by " << service_charge << "TK \n"
                 << " You must store " << minimum << "TK to avoid discharge \n "
                 << " Do you want to withdraw ? press 1 for yes press 0 for no \n"
                 << " what is your option ?";
        }
        int test;
        cin >> test;
        if (test == 0)
        {
            balance += w;
        }
    }
}
void curr_acc::display()
{
    cout << "\n Now balance = " << balance << "\n";
}
class sav_acct : public account
{
    float balance;
    int d, m, y;

public:
    void deposite(float d);
    void withdraw(float w);
    void display();
    void set_date(int a, int b, int c)
    {
        d = a;
        m = b;
        y = c;
    }
    void interest();
};
void sav_acct::deposite(float d)
{
           int x,y,z;
           cout<<" Enter today's date(i,e day,month,year) : ";
          cin>>x>>y>>z;
           set_date(x,y,z);
           balance=d;
}
 
       void sav_acct::withdraw(float w)
{
                 if(balance<w)
              cout<<" sorry your balance is less than your withdrawal amount \n";
                else
                {
                       balance-=w;
 
                                if(balance<minimum)
                        {
 cout<<"\n your current balance is :"<<balance<<" which is   less than"<<minimum<<"\n your account is discharged by "<<service_charge<<"TK \n"<<" You must store "<<minimum<<"TK to avoid discharge \n "<<" Do you want to withdraw ? press 1 for yes press 0 for no \n"<<" what is your option ?";
 
                             int test;
                              cin>>test;
                             if(test==0)
                              balance+=w;
                      }
              }
 
}
void sav_acct::display()
{
                cout<<"\n Now balance = "<<balance;
}
void sav_acct::interest()
{
            int D[12]={31,28,31,30,31,30,31,31,30,31,30,31};
            int d1,y1,m1;
            cout<<" Enter today's date :(i,e day,month,year) ";
            cin>>d1>>m1>>y1;
            int iday,fday;
            iday=d;
           fday=d1;
          for(int i=0;i<m1;i++)
          {
                   fday+=D[i];
          }
         for(int i=0;i<m;i++)
         {
                    iday+=D[i];
         }
       int tday;
         tday=fday-iday;
         float ty;
         ty=float(tday)/365+y1-y;
         float intrst;
 
          intrst=ty*r*balance;
          cout<<" Interest is : "<<intrst<<"\n";
          balance+=intrst;
}
 
int main()
{
           sav_acct santo;
           santo.create("savings");
           float d;
           cout<<" Enter your deposit amount : ";
           cin>>d;
           santo.deposite(d);
           santo.display();
           int t;
          cout<<"\n press 1 to see your interest : \n"
                <<" press 0 to skip : ";
 
           cin>>t;
 
         if(t==1)
          santo.interest();
 
         cout<<"\n Enter your withdrawal amount :";
         float w;
         cin>>w;
          santo.withdraw(w);
           santo.display();
          return 0;
}