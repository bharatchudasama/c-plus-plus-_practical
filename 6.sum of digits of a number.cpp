#include<iostream>
using namespace std;
//this program is to find sum of digits of a given number

int main()
{
	int n,temp,sum=0;
	cout<<"enter a number :";
	cin>>n;
	temp=n;
	while (temp>0){
		sum+=temp%10;
		temp=temp/10;
	}
	cout<<"sum of digits:"<<sum;
	return 0;
	
}