#include<iostream>
using namespace std;
void empty() throw(){
    cout<<"In empty()\n";
}
void withType(float x) throw(int){
	if(x==1)
	throw(1);
	else if(x==1.1)
	throw (2.1);
}
int main(){
    cout<<"\n";
		try{
			empty();
			withType(1);
		}
		catch (int n){
			cout<<"Integer number\n";
		}
		catch(float){
			cout<<"Float number\n";
		}
		return 0;
}