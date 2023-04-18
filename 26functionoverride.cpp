#include<iostream>
/* -- this program is to understand function override -- */
using namespace std;
class A {
    public :
        void Display(int i){
            cout<<"in base class"<<endl;
            cout<<"i="<<i<<endl;
            cout<<"*************************************************"<<endl;
        }
};

class B : public A {
    public:
    void Display(int j ){
        cout<<"in derived class"<<endl;
        cout<<"j="<<j<<endl;
        cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
    }
    //using function overloading concept 
    void Display(int i ,int j ){
        cout<<"in derived class"<<endl;
        cout<<"j="<<j<<endl;
        cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
        A::Display(i);
    }
};

int main(){
    A A1;
    B B1;
    A1.Display(56);//base class
    B1.Display(65);//dervide class
    B1.A::Display(36);//base class
    B1.Display(56,63);//both derived and base class

    return 0;

}