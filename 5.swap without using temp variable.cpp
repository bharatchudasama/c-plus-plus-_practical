#include <iostream>
using namespace std;
//without using extra variable
int main(){
	int a,b;
	cout<<"enter numbers:";
	cin>>a>>b;

	a=b+a;
	b=a-b;
	a=a-b;
	cout<<"a:"<<a<<endl<<"b:"<<b;
 
	
	
}
