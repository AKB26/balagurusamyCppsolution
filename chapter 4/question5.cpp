#include <iostream>
using namespace std;
#define MAX(x, y, z) ((x > y && x > z) ? x : (y > z) ? y \
                                                     : z)
int main()
{
    int a, b, c;
    cout << "\nMACRO  TO  OBTAIN  LARGERST  OF  3  NUMBERS" << endl;
    cout << "\n\nEnter  3  Numbers:  ";
    cin >> a >> b >> c;
    cout << "largerst  Number:  " << MAX(a, b, c);
    return 0;
}
