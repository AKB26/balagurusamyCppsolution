#include <iostream>
using namespace std;
int main(){
    int n, m;
    cout << "\nEnter  Sizes  of  Matrix:  ";
    cin >> m >> n;
    cout << "Enter  Elements:  " << endl;
    int a[n][m];
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];
    cout << "\nThe  Matrix  is:  \n";
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}