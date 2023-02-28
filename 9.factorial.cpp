#include<iostream >
using namespace std;
 
//program to calculate factorial of a given number using do while 

int main(){
	int res;
	do{
		int n;
		cout<<"enter a number :";
		cin>>n;
		int i=n,ans=1;
		while(i>0){
			ans*=i;
			i--;
		}
		cout<<"factorial:"<<ans;
		
		cout<<"\n do it again(0/1):";
		cin>>res;
		
	}while(res==1);
	return 0;
}