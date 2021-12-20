#include <iostream> 
using namespace std;
int main(){
    cout<<"\n";
    int choice;
    try{
        cout<<"Enter any choice: "; 
        cin>>choice;
        if(choice == 0)         cout<<"Choice = 0"<<endl;
        else if(choice == 1)    throw (2606);
        else if(choice == 2)    throw ('A');
        else if(choice == 3)    throw (26.06f);  
        else    cout<<"Invaild"<<endl;
    }
    catch(int a){
        cout<<"Choice = 1, Integer value : "<<a<<endl;
    }
    catch(char b){
        cout<<"Choice = 2, Character value : "<<b<<endl;
    }
    catch(float c){
        cout<<"Choice = 3, Float value : "<<c<<endl;
    }

    return 0;
}