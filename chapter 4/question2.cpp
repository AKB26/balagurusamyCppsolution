#include <iostream>
using namespace std;
void mat(int m, int n){
    int a[m][n];
    cout << "Enter  Elements:  " << endl;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    cout << "\nElements  Are:  \n";
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }
}
int main(){
    int m, n;
    cout << "\nEnter  Sizes  of  Matrix:  ";
    cin >> m >> n;
    mat(m, n);
    return 0;
}
