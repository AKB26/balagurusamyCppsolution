#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char line[100];
    int word = 0, count = 0, lines = 1;
    int i;
    string s;
    cout << "ENTER TEXT : "
         << "\n";
    while (line[i] != '.')
    {
        cin.get(line[i]);
        if (line[i] == ' ')
        {
            word++;
        }
        else if (line[i] == '\n')
        {
            word++;
            lines++;
        }
        count++;
    }
    cout << "\n\n\n DISPLAYING : " << endl;
    cout.setf(ios::left, ios::adjustfield);
    cout << setw(25) << "Number of lines" << setw(25)
         << "Number of words "
         << "Number of characters " << endl;
    cout.setf(ios::right, ios::adjustfield);
    cout << setw(10) << lines << setw(24) << word << setw(25) << count << endl
         << endl;
    return 0;
}
