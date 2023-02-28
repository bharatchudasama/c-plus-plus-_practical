#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;

//program to calculate ARMSTRONG no in between 1 to 10000
int armstrong(int n,int size ){
	long ans=0,rem=0,temp=n;
	for(int i=0;i<size;i++){
		rem=temp%10;
		ans+=pow(rem,size);
		temp=temp/10;

	}
	if (ans==n){
		cout<<ans<<endl;
		return 1;
	}


	return 0;
}

int main(){
	int l=1,u=10000,count=0;
	cout<<"armstrong number in between 1 to 10000:"<<endl;
	for (int i = l; i<u+1;i++){
		if (i>0 && i<10){
			count+=armstrong(i,1);

		}
		else if (i>9 && i<100){
			count+=armstrong(i,2);
		}
		else if (i>99 && i<1000){
			count+=armstrong(i,3);
		}
		else if (i>999 && i<10000){
			count+=armstrong(i,4);
		}
	}
	cout<<"count:"<<count;
//	int n=153,a=0;
//	a=armstrong(153,3);
	return 0;
}