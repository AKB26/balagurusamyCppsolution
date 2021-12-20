#include <iostream>
using namespace std;
void mat(int m, int n)
{
    int a[m][n];
    cout << "Enter  Elements:  " << endl;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    cout << "\nElements  Are:  \n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cout << a[i][j] << "  ";
}
void mat(int m, long n = 2){
    int a[m][n];
    cout << "Enter  Elements:  " << endl;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)

            cin >> a[i][j];

    cout << "\nElements  Are:  \n";
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){

            cout << a[i][j] << "  ";
        }
        cout << endl;
    }
}
int main(){
    int m;
    cout<<"\n\nEnter  Row  as  a  default  parameter  for  function  overloading: ";
    cin>>m; 
    mat(m);
}
