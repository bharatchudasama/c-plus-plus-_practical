#include<bits/stdc++.h>

using namespace std;

class house{
    protected:
        string nameplate;
    private:
        int rooms;
    public:
        int floors;
        void set(string nam,int f,int r){
            floors=f;
            nameplate=nam;
            rooms=r;
        }
        void get(){
            cout<<"owner name:"<<nameplate<<endl<<"floors:"<<floors<<endl<<"Total rooms:"<<rooms;
        }
};
class floor_s : protected house{
    private :
        int room ;
        int floorno;
    public:

	   void set(int a,int b ){

	        room=b;
            floorno=a;
	    }
        void get(){
            cout <<endl<<"rooms in floor "<<floorno<<" :"<<room;
        }

};
int main(){
    house h1;
    floor_s f1;

    string a= "bharat";
    h1.set(a,2,3);
    h1.get();
    f1.set(1,1);
    f1.get();
    // f1.floors=47;

    

    return 0;
}