#include <bits\stdc++.h>
using namespace std;
char *sub[10] = {"Matehmatics", "Cpp", "Accounts",
                 "Python", "FET", "Elective-1",
                 "Elective-2", "Elective-3", "Elective-3", "Elective-4"};

class student_info
{

public:
    char name[40];
    char roll[20];

public:
    void set_info();
};

void student_info::set_info()
{
    cout << "Enter student name : ";
    gets(name);
    cout << "Enter roll: ";
    gets(roll);
}

class subject : public student_info
{

public:
    float mark[10];

public:
    void set_mark();
};

void subject::set_mark()
{
    cout << " marks  of  : \n";
    for (int i = 0; i < 10; i++)
    {
        cout << sub[i] << " = ? ";
        cin >> mark[i];
    }
}
class conversion : public subject
{
    float gpa[10];
    char grade[20][20];

public:
    void convert_to_gpa();
    void show();
};
void conversion::convert_to_gpa()
{
    for (int i = 0; i < 10; i++)
    {
        if (mark[i] >= 80)
        {
            gpa[i] = 5.00;
            strcpy(grade[i], "A+");
        }
        else if (mark[i] >= 70 && mark[i] < 80)
        {
            gpa[i] = 4.00;
            strcpy(grade[i], "A");
        }
        else if (mark[i] >= 60 && mark[i] < 70)
        {
            gpa[i] = 3.50;
            strcpy(grade[i], "A-");
        }
        else if (mark[i] >= 50 && mark[i] < 60)
        {
            gpa[i] = 3.00;
            strcpy(grade[i], "B");
        }
        else if (mark[i] >= 40 && mark[i] < 50)
        {
            gpa[i] = 2.00;
            strcpy(grade[i], "C");
        }
        else if (mark[i] >= 33 && mark[i] < 40)
        {
            gpa[i] = 1.00;
            strcpy(grade[i], "D");
        }
        else
        {
            gpa[i] = 0.00;
            strcpy(grade[i], "Fail");
        }
    }
}
void conversion::show()
{
    cout << " result of \n";
    cout << "name :" << name << "\n";
    cout << "Roll : " << roll << "\n";
    cout << setw(25) << "Subject" << setw(17) << "Marks"
         << setw(14) << "GPA" << setw(12) << "Grade \n";
    for (int i = 0; i < 10; i++)
    {
        cout << setw(25) << sub[i] << setw(15) << mark[i]
             << setw(15) << gpa[i] << setw(10) << grade[i] << "\n";
    }
}
int main()
{

    conversion A;
    A.set_info();
    A.set_mark();
    A.convert_to_gpa();
    A.show();
    return 0;
}