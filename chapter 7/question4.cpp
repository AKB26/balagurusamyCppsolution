#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class String{
    char str[20];
    public:
    void getString(){
        gets(str);
    }
    int operator== (String s){
        if(!strcmp(str,s.str)){
            return 1;
        }
        return 0;
    }
};
int main(){
    String s1, s2;
    cout<<"Enter first string:  ";
    s1.getString();
    cout<<"Enter second string:  ";
    s2.getString();
    if(s1 == s2){
        cout<<"\nStrings are Equal\n";
    }
    else{
        cout<<"\nString are not Equal\n";
    }
}