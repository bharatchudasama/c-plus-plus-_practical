#include<iostream>
#include<math.h>
using namespace std;

//program to calcualte roots of a given equation 

int main(){
	float a,b,c,D,root1,root2;
	cout<<"a*X^2+b*X+c"<<endl;
	cout<<"enter a :";cin>>a;
	cout<<"enter b :";cin>>b;
	cout<<"enter c :";cin>>c;
	
	D=(b*b)-4*a*c;
	if (D==0){
		cout<<"equal roots"<<endl;
	}
	else if (D>0){
		cout<<"D is positive "<<endl;
	}
	else if (D<0){
		cout<<"D is negative hence imaginery roots";
		return 0;
	}
	
	root1=(-b+sqrt(D))/2*a;
	root2=(-b-sqrt(D))/2*a;
	cout<<"roots:"<<root1<<" , "<<root2;
	return 0;
	
}