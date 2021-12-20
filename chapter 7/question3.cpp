#include <iostream>
#include <iomanip>
using namespace std;
class mat
{
    float **m;
    int rs, cs;

public:
    mat() {}
    void creat(int r, int c);
    friend istream &operator>>(istream &, mat &);
    friend ostream &operator<<(ostream &, mat &);
    mat operator+(mat m2);
    mat operator-(mat m2);
    mat operator*(mat m2);
};

void mat::creat(int r, int c)
{
    rs = r;
    cs = c;
    m = new float *[r];
    for (int i = 0; i < r; i++)
        m[i] = new float;
}

istream &operator>>(istream &din, mat &a){
    int r, c;
    r = a.rs;
    c = a.cs;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            din >> a.m[i][j];
        }
    }
    return (din);
}
ostream &operator<<(ostream &dout, mat &a){
    int r, c;
    r = a.rs;
    c = a.cs;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            dout << setw(5) << a.m[i][j];
        }
        dout << "\n";
    }
    return (dout);
}
mat mat::operator+(mat m2)
{
    mat mt;
    mt.creat(rs, cs);
    for (int i = 0; i < rs; i++)
    {
        for (int j = 0; j < cs; j++)
        {
            mt.m[i][j] = m[i][j] + m2.m[i][j];
        }
    }
    return mt;
}

mat mat::operator-(mat m2)
{
    mat mt;
    mt.creat(rs, cs);
    for (int i = 0; i < rs; i++)
    {
        for (int j = 0; j < cs; j++)
        {
            mt.m[i][j] = m[i][j] - m2.m[i][j];
        }
    }
    return mt;
}

mat mat::operator*(mat m2)
{
    mat mt;
    mt.creat(rs, m2.cs);

    for (int i = 0; i < rs; i++)
    {
        for (int j = 0; j < m2.cs; j++)
        {
            mt.m[i][j] = 0;
            for (int k = 0; k < m2.rs; k++)
                mt.m[i][j] += m[i][k] * m2.m[k][j];
        }
    }

    return mt;
}
int main()
{
    mat m1, m2, m3, m4, m5;
    int r1, c1, r2, c2;
    cout<<"\n";
    cout << "Enter row and column for 1st matrix size : ";
    cin >> r1 >> c1;
    m1.creat(r1, c1);
    cout<<"\n";
    cout << "Enter first matrix elements : ";
    cin >> m1;
    cout<<"\n";
    cout << "Enter row and column for 2nd matrix size : ";
    cin >> r2 >> c2;
    m2.creat(r2, c2);
    cout<<"\n";
    cout << "Enter second matrix elements = ";
    cin >> m2;
    cout<<"\n";
    cout << "First Matrix :" << endl;
    cout << m1;
    cout << "Second Matrix: " << endl;
    cout << m2;
    cout << endl
         << endl;
    if (r1 == r2 && c1 == c2)
    {
        m3.creat(r1, c1);
        m3 = m1 + m2;
        cout << "Addition : " << endl;
        cout << m3 << endl;
        m4.creat(r1, c1);

        m4 = m1 - m2;
        cout << "Subtraction :" << endl;
        cout << m4 << endl
             << endl;
    }
    else
        cout << "Additon & Sub cannot be perfomed" << endl
             << "Two matrices must be same size for addition & Sub" << endl
             << endl;
    if (c1 == r2){
        m5 = m1 * m2;
        cout << "Multiplication : " << endl;
        cout << m5;
    }
    else
        cout << "Multiplication is not possible " << endl
             << "Column of first matrix must be equal to the row of second matrix ";
    return 0;
}