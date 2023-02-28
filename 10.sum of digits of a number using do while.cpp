#include<iostream>
using namespace std ;
//sum of digits of a number using do while 

int main(){
	int n,temp,sum=0;
	cout<<"enter a number :";
	cin>>n;
	temp=n;
	do{
		sum+=temp%10;
		temp=temp/10;
	}while (temp>0);
	cout<<"sum of digits:"<<sum;
	return 0;
	
}