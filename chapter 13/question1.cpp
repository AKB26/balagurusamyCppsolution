#include<bits\stdc++.h>
using namespace std;
int main(){
    cout<<"\n";
    int arr[] = {1,2,3,4,5};
    int posi;
    cout<<"Enter position : "; cin>>posi;
    try{
        if(posi>4 || posi <0){
            throw posi;
        }
        cout<<"\nElement : "<<arr[posi]<<endl;
    }
    catch(int a){
        cout<<"Error"<<endl;
    }
    
}