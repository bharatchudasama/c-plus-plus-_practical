#include<iostream >
#include<iomanip>
using namespace std;
 
//program to calculate factorial of given range 

int main(){
	long long ans;
	int upper,lower;
	cout<<"enter lower limit:";cin>>lower;
	cout<<"enter upper limit:";cin>>upper;
	int i = lower;
	ans=1;
	for(int j=1 ;j<=lower;j++){
		ans*=j;
	}
	cout<<endl<<"factorial of "<<setw(4)<<i<<" is : "<<setw(20)<<ans<<endl;
	i++;
	for (i;i<=upper;i++){
		ans*=i;
		cout<<"factorial of "<<setw(4)<<i<<" is : "<<setw(20)<<ans<<endl;
	}
	return 0;
}