#include<bits\stdc++.h>
using namespace std;
class staff{
protected:
    int code;
    char name[100];

public:
    void set_info(char *n, int c){
        strcpy(name, n);
        code = c;
    }
};

class education : public staff{
protected:
    char quali[100];
public:
    void set_qualification(char *q) { strcpy(quali, q); }
};

class teacher : public education{
protected:
    char sub[100], publication[100];

public:
    void set_details(char *s, char *p){
        strcpy(sub, s);
        strcpy(publication, p);
    }

    void show(){
        cout << "Name" << setw(8) << "Code" << setw(15) << "Subject" << setw(22)
             << "Publication" << setw(19) << "Qualification" << endl
             << name << setw(6)
             << code << setw(19) << sub << setw(16) << publication << setw(15) << quali
             << endl;
             cout<<"\n\n";
    }
};

class officer : public education{
    char grade[100];

public:
    void set_details(char *g){
        strcpy(grade, g);
    }

    void show(){
        cout << "Name" << setw(8) << "Code" << setw(15) << "Catagory"
             << setw(23) << "Qualification" << endl
             << name << setw(8)
             << code << setw(19) << grade << setw(27) << quali << endl
             << endl;
    }
};

class typist : public staff{
protected:
    float speed;

public:
    void set_speed(float s)
    {
        speed = s;
    }
};
class regular : public typist{
protected:
    float wage;

public:
    void set_wage(float w) { wage = w; }
    void show()
{
        cout << "Name" << setw(8) << "Code" << setw(15) << "Speed" << setw(18)
             << "Wage" << endl
             << name << setw(7) << code << setw(16) << speed
             << setw(18) << wage << endl
             << endl;
    }
};
class causal : public typist{
    float wage;

public:
    void set_wage(float w) { wage = w; }

    void show()
{
        cout << "Name" << setw(8) << "Code" << setw(15) << "Speed" << setw(18)
             << "Wage" << endl
             << name << setw(9) << code << setw(16) << speed
             << setw(18) << wage << endl
             << endl;
    }
};
int main(){
    teacher t;
    t.set_info("Aayush", 420);
    t.set_details("Matheamtics", "RD SHARMA");
    t.set_qualification("PHD");
    officer o;
    o.set_info("Raj", 531);
    o.set_details("First class");
    o.set_qualification("2 years experienced");
    regular rt;
    rt.set_info("Rahul", 665);
    rt.set_speed(105.3);
    rt.set_wage(10000);
    causal ct;
    ct.set_info("Ram",678);
    ct.set_speed(58.7);
    ct.set_wage(10000);
    cout << "  About teacher: " << endl;
    t.show();
    cout << " About officer:" << endl;
    o.show();
    cout << " About regular typist :" << endl;
    rt.show();
    cout << " About causal typist :" << endl;
    ct.show();

    return 0;
}