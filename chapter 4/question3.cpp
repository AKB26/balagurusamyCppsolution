#include <iostream>
using  namespace  std;
void mat(int n, int m = 3){
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
    cout<<endl;
    cout << "Row  as  a  default  parameter";
    int n;
    cout << "\nEnter  Column  Size  of  Matrix:  ";
    cin >> n;
    mat(n);
}
