#include<iostream>
using namespace std;
//this program is to find reverse of a given number

int main()
{
	int n,temp,rev=0;
	cout<<"enter a number :";
	cin>>n;
	temp=n;
	while (temp>0){
		rev*=10;
		rev+=temp%10;
		temp=temp/10;
		
	}
	cout<<"reverse of digits:"<<rev; 
	return 0;
	
}