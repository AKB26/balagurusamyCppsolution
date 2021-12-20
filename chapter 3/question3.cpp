// TO PRINT PATTERN USING FOR LOOP
#include <iostream>
using namespace std;
void pattern(){
    int i, j;
    for (i = 1; i <= 5; i++){
        for (j = 1; j <= i; j++){
            cout << i;
        }
        cout << endl;
    }
}
int main(){
    cout<<endl;
    pattern();
    return (0);
    cout<<endl;
}