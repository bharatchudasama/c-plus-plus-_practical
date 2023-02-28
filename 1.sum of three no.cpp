#include <iostream>
#include <conio.h>
//using namespace std;
//program to calculate sum and avrage of 3 numbers 


int main (){
	int a,b,c;
	std::cout<<"enter 3 numbers:";
//	instead of std:: use using namespace std on start 
	std::cin>>a>>b>>c;

	float s , t;
	s=a+b+c;
	t=(a+b+c)/3;

	std::cout<<"sum :"<<s<<std::endl<<"avreage:"<<t<<std::endl;
	getch();
//	getch is used for to let screen time increase after output has shown 
	
	return 0;
}