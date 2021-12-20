#include <iostream>
using namespace std;
inline int max(int a, int b, int c) { return ((a > b && a > c) ? a : (b > c) ? b
                                                                             : c); }
int main()
{
    int a, b, c;
    cout << "\nINLINE  FUNCTION  TO  OBTAIN  LARGERST  OF  3  NUMBERS" << endl;
    cout << "\n\nEnter  3  Numbers:  ";
    cin >> a >> b >> c;
    cout << "largerst  Number:  " << max(a, b, c);

    return 0;
}
