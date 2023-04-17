#include<iostream>
using namespace std;
class student{
    protected:
        string name;
        int roll_no;
    public:
        void get(string n,int r){
            name=n;
            roll_no=r;
        }

        void Display(){
            cout<<"Name:"<<name;
            cout<<"Roll Number :"<<roll_no;
        }
};
class marks : public student {
    protected:
        int physics;
        int maths;
        int cs;
        float avg;
    public:
        void get(string n,int r,int p,int m,int c){
            physics=p;
            maths=m;
            cs=c;
            name=n;
            roll_no=r;
        }
        float cal_average(){
            avg=physics+maths+cs;
            avg=avg/3;
            return avg;
        }
        void display(){
            // cout<<"Name:"<<name;
            // cout<<"roll number:"<<roll_no;
            // cout<<"physics"<<physics
            cout<<" "<<name<<" "<<roll_no<<" "<<physics<<" "<<maths<<" "<<cs<<" "<<cal_average();

        }
};
int main()
{
    student S;
    marks M;
    M.get("bharat",119,89,89,89);
    S.get("bharat",119);
    M.display();
    return 0;
}

