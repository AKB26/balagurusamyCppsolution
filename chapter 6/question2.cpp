#include<bits\stdc++.h>
using namespace std;
class String{
    char *str;
    int length;
    public: 
    String(){
        length = 0;
        str = new char[length + 1]; 
    }
    String (char* s){
        length = strlen(s);
        str = new char[length + 1];
        strcpy(str,s);  
    }
    void concat(String&m, String& n){
        length=m.length+n.length;
        delete str;
        str=new char[length+1];
        strcpy(str,m.str);
        strcat(str,n.str);
    }
    String(String &x){
        length = x.length + strlen(x.str);
        str = new char[length +1 ];
        strcpy(str,x.str);
    }
    void  display(){
        cout<<str<<"\n";
    }
};
int main(){
    String s1;
    String s2("Well done");
    String s3("Badly done");
    s2.display();
    s1.concat(s2,s3);
    s2 = s3;
    s2.display();
    s1.display();
    return 0;
}
