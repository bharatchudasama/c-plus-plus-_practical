#include <iostream>
using namespace std;
class Room{
	public:
    int leng;
    int widt;
    int heig;
    public:
//    	default constructor
        Room(){
            leng=1;
            widt=2;
            heig=3;

        } 
//    	constructor with 2 passing parameter
        Room(int l , int w ){
            leng=l;
            widt=w;
            heig=3;
        }
//    	constructor with 3 passing parameter
        Room(int l ,int w,int h){
            leng=l;
            widt=w;
            heig=h;
        }
//    	copy constructor 
        Room(Room &a){
        	leng=a.leng;
        	heig=a.heig;
        	widt=a.widt;
        	
		}
        int Volume(){
            return leng*widt*heig;
        }
};
int main(){
    int l , w, h;
    Room R1;
    cout<<"Volume 1 :"<<R1.Volume()<<endl;
    
    cout<<"Enter Lenght:";cin>>l;
    cout<<"Enter width:";cin>>w;
    Room R2(l,w);
	cout<<"Volume 2 :"<<R2.Volume()<<endl;
    
    cout<<"Enter height:";cin>>h;
    Room R3(l,w,h);cout<<"Volume 3 :"<<R3.Volume()<<endl;
    
    Room R4(R2);
	cout<<"Volume 4 :"<<R4.Volume();
    R2.leng=5;
	cout<<"Volume 2 :"<<R2.Volume()<<endl;
	cout<<"Volume 4 :"<<R4.Volume()<<endl;
    return 0;
}