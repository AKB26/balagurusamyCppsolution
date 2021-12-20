#include <bits\stdc++.h>
using namespace std;
class book
{
    static int suc, unsuc;
    char **author;
    char **title;
    float *price;
    char **publisher;
    int *stockCopy;
    int size;

public:
    book();
    void book_detail(int i);
    void buy(int i);
    int search();
    void showtransaction();
    void showdetail();
    void edit_price();
};
int book::suc = 0;
int book::unsuc = 0;
book ::book()
{
    size = 4;
    author = new char *[80];
    title = new char *[80];
    publisher = new char *[80];

    for (int i = 0; i < size; i++)
    {
        author[i] = new char[80];
        title[i] = new char[80];
        publisher[i] = new char[80];
    }
    stockCopy = new int[size];

    price = new float[size];

    title[0] = "stl";
    title[1] = "programming with tim";
    title[2] = "comptuer basics theory";
    title[3] = "Data structures and algorithm";

    author[0] = "balagurusamy";
    author[1] = "tim";
    author[2] = "MarosMano";
    author[3] = "narasimha karumanchi";

    stockCopy[0] = 300;
    stockCopy[1] = 180;
    stockCopy[2] = 730;
    stockCopy[3] = 200;

    price[0] = 430;
    price[1] = 350;
    price[2] = 450;
    price[3] = 430;
}

void book::book_detail(int i)
{
    cout << " *********book detail **********\n";
    cout << setw(25) << "Title" << setw(30) << "Author Name"
         << setw(18) << "Stock copy\n";
    cout << setw(15) << title[i] << setw(16) << author[i] << setw(15)
         << stockCopy[i] << "\n";
}

int book::search()
{
    char name[80], t[80];
    
    cout << "Enter author name : ";
    gets(name);
    cout << "and title of book in small letter : ";
    gets(t);
    int count = 0;
    int a, b;
    for (int i = 0; i < size; i++)
    {

        a = strcmp(name, author[i]);
        b = strcmp(t, title[i]);
        if (a == 0)
            count = i;
    }

    return count;
}

void book::buy(int i)
{
    if (i < 0)
    {
        cout << " This book is not available \n";
        unsuc++;
    }

    else
    {
        book_detail(i);
        cout << " How many copies of this book is required : ";
        int copy;
        cin >> copy;

        if (copy <= stockCopy[i])
        {
            stockCopy[i] = stockCopy[i] - copy;
            float total_price;
            total_price = price[i] * copy;
            cout << "Total price = " << total_price << " TK\n";
            suc++;
        }
        else
        {
            cout << " Sorry your required copies is not available \n";
            unsuc++;
        }
    }
}

void book::edit_price()
{
    cout << " To edit price ";
    int i;
    i = search();
    
    cout << "Enter new price : ";
    float p;
    cin >> p;
    price[i] = p;
}
void book::showdetail()
{
    cout << setw(22) << "Title" << setw(30) << " stock copy " << setw(20)
         << " Price per book " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << setw(35) << title[i] << setw(10) << stockCopy[i]
             << setw(18) << price[i] << endl;
    }
}
void book::showtransaction()
{
    cout << setw(22) << "suc transaction" << setw(34)
         << "unsuc transaction " << endl
         << setw(10)
         << suc << setw(32) << unsuc << endl;
}

int main()
{
    cout << "\n\n";
    book B;
    int result;

    result = B.search();
    B.buy(result);
    B.showdetail();
    B.showtransaction();
    B.edit_price();
    // B.search();
    cout << "************details after edit price****************" << endl;
    B.showdetail();

    return 0;
}