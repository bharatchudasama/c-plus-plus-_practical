#include<iostream >
#include<iomanip>
using namespace std;
 
//program to calculate factorial  of a given number while explaining it 

int main(){
	int res;
	do{
		long long n;
		cout<<"enter a number :";
		cin>>n;
		long long i=2,ans=1;
		while(i<=n){
			cout<<setw(20)<<ans<<" X "<<setw(10)<<i<<" is ";
			ans*=i;
			cout<<setw(20)<<ans<<endl;
			
			i++;
		}
		cout<<"factorial:"<<ans;
		
		cout<<"\n do it again(0/1):";
		cin>>res;
		
	}while(res==1);
	return 0;
}