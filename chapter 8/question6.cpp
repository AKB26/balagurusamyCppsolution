#include<bits\stdc++.h>
using namespace std;
class staff{
public:
    int code;
    char name[100];

public:
    void set_info(char *n, int c){
        strcpy(name, n);
        code = c;
    }
};
class teacher : public staff{
protected:
    char sub[100], publication[100];
public:
    void set_details(char *s, char *p){
        strcpy(sub, s);
        strcpy(publication, p);
    }
    void show(){
        cout << "Name" << setw(17) << "Code" << setw(17) << "Subject" << setw(25)
             << "Publication" << endl
             << name << setw(14) << code << setw(22) << sub
             << setw(18) << publication << endl;

             cout<<"\n\n";
    }
};
class officer : public staff{
    char grade[100];
public:
    void set_details(char *g){
        strcpy(grade, g);
    }
    void show(){
        cout << "Name " << setw(15) << "Code" << setw(20) << "Catagory " << endl
             << name << setw(9) << code << setw(20) << grade << endl;

             cout<<"\n\n";
            
    }
};
class typist : public staff{
protected:
    float speed;

public:
    void set_speed(float s){
        speed = s;
    }
    void show(){
        cout << "Name " << setw(15) << "Code" << setw(15) << "Speed" << endl
             << name << setw(10) << code << setw(15) << speed << endl
             << endl;

             cout<<"\n\n";

    }
};
int main(){
    teacher t;
    t.set_info("Aayush", 360);
    t.set_details("Mathematics", "BS Dangwal");

    officer o;
    o.set_info("Rashid Khan", 232);
    o.set_details("Second class");

    typist tp;
    tp.set_info("Ravi Kumar", 333);
    tp.set_speed(65.5);

    cout << "  About teacher: " << endl;
    t.show();
    cout << " About officer:" << endl;
    o.show();
    cout << " About  typist :" << endl;
    tp.show();
    return 0;
}