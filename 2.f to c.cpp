#include<iostream>
using namespace std;
//this a program to convert fahrenheit to celsius

int main(){
	float f ;
	cout<<"enter temprature in fahrenheit:";
	cin>>f;
	float c;
	c=(f-32)*5/9;
	cout<<"in celcius "<<c;
	
	return 0;
	
}