#include <bits\stdc++.h>
using namespace std;
int main()
{
    ofstream of;
    of.open("file1.txt");
    char ch;
    ifstream inf("file2.txt");
    inf.get(ch);
    while (inf)
    {
        if (ch == ' ')
        {
            while (inf)
            {
                inf.get(ch);
                if (ch != ' ')
                {
                    break;
                }
            }
            of << " ";
            of << ch;
        }
        else
            of << ch;
        inf.get(ch);
    }
    return 0;
}