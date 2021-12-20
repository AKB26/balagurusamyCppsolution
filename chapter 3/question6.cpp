#include <iostream>
using namespace std;
int main(){
    int runs, innings;
    float avg;
    cout << "\nEnter 5 records including following details\n";
    cout << "1) Player's Name\n";
    cout << "2) Runs\n";
    cout << "3) Innings\n";
    cout << "4) Times Not out\n\n";
    struct cricketer{
        char name[15];
        int runs;
        int innings;
        int tno;
        float avg;
    } rec[5];
    for (int i = 0; i < 3; i++){
        cout << "\nEnter Player Name:-";
        cin >> rec[i].name;
        cout << "Enter Runs:-";
        cin >> rec[i].runs;
        cout << "Enter Innings:-";
        cin >> rec[i].innings;
        cout << "Enter Time not out:-";
        cin >> rec[i].tno;
        rec[i].avg = float(rec[i].runs) / rec[i].innings;
    }
    cout << "\n\n\n";
    cout << "PLAYER NAME    RUNS   INNINGS  TIMES_NOT_OUT  BATTING_AVERAGE  ";
    for (int i = 0; i < 3; i++){
        cout << "\n";
        cout << rec[i].name << "         " << rec[i].runs << "  " << rec[i].innings << "  " << rec[i].tno << "  " << rec[i].avg;
        cout << "\n";
    }
    return (0);
}