#include<iostream>
using namespace std;
//program to find if a number is prime or not 

int main(){
	int n;
	cout<<"enter n :";
	cin>>n;
	bool check=0;
	for(int i = n/2 ; i>1;i--){
		if (n%i==0){
			check =1;
			break;
		}
	}
	if (check==0){
		cout<<n<<" is prime no.";
	}
	else {
		cout<<n<<" is not a prime no.";
	}
	return 0;
}