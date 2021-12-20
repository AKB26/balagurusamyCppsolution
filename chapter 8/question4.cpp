#include<bits\stdc++.h>
using namespace std;
class staff{
    public:
    int code;
    char name[150];
    void setInfo(char* n, int c){
        strcpy(name,n );
        code = c;
    }
};
class education: public staff{
    protected:
    char qualification[400];
    public:
    void setQualifi(char* q){
        strcpy(qualification, q);
    }
};

class Teacher : public education{
    protected:
    char subj[150], pub[200];
    public:
    void setData(char* s, char *p){
        strcpy(subj,s);
        strcpy(pub,p);
    }
    void show(){
        cout << "Name " << setw(8) << "Code" << setw(15)
             << "Subject" << setw(22) << "Publication"
             << setw(19) << "Qualification" << endl
             << name << setw(8) << code << setw(18)
             << subj << setw(16) << pub << setw(20) << qualification << endl;
    }
};

class officer : public education{
    char grade[80];
    public:
    void setData(char*g){
        strcpy(grade,g);
    }
    void Show(){
       cout << "Name " << setw(8) << "Code" << setw(17) << "Catagory "
             << setw(22) << "Qualification" << endl
             << name << setw(11)
             << code << setw(18) << grade << setw(18) << qualification << endl
             << endl;
             cout<<"\n\n";
    }
};
class typist :public staff{
    protected:
    float speed;
    public:
    void setTSpeed(float s){
        speed  = s;
    }
};
class regular : public typist{
    protected:
    float wage;
    public:
    void setWage(float w){ 
        wage = w;
    }
    void Show(){
        cout<<"Name"<<setw(10)<<"Code"<<setw(10)<<"Speed"<<setw(12)<<"Wage"<<endl<<endl<<name<<setw(8)<<code<<setw(11)<<speed<<setw(14)<<wage<<endl;
             cout<<"\n\n";
    }
};
class causal : public typist{
    float wage;
    public:
    void setWage(float w){
        wage = w;
    }
    void Show(){
        cout<<"Name"<<setw(10)<<"Code"<<setw(10)<<"Speed"<<setw(12)<<"Wage"<<endl<<endl<<name<<setw(10)<<code<<setw(10)<<speed<<setw(14)<<wage<<endl;
             cout<<"\n\n";

    }
};
int main(){
    cout<<"\n\n";
    Teacher t;
    t.setInfo("Aayush",500);
    t.setData("MATHEMATICS", "RD SHARMA");
    t.setQualifi("PHD FROM MIT");

    officer of;
    of.setInfo("SKR",450);
    of.setData("Third level");
    of.setQualifi("BSC FROM DU");
    regular R;
    R.setInfo("Rahul", 666);
    R.setTSpeed(102.3);
    R.setWage(100000);
    
    causal cas;
    cas.setInfo("Raj",543);
    cas.setTSpeed(89);
    cas.setWage(10000);
    cout<<"About Teacher : "<<endl;
    t.show();
    cout<<"\n";
    cout<<"About Officer : "<<endl;
    of.Show();
    cout<<"\n";
    cout<<"About Regular Typist : "<<endl;
    R.Show();
    cout<<"\n";
    cout <<"About Causal Typist :" << endl;
    cas.Show();
    return 0;
}