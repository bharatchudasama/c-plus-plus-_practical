#include<iostream>
using namespace std;

void chr(){
    for(int i =0 ;i<25;i++){
        cout<<"*";
    }
}
void chr(char a){
    for(int i =0 ;i<25;i++){
        cout<<a;
    }
}
void chr(char a,int b){
    for(int i =0 ;i<b;i++){
        cout<<a;
    }
}
int main(){
    int b;
    char a;
    // cout<<"enter character:";
    cin>>a;
    // cout<<"enter numnber:";
    cin>>b;
    chr();cout<<endl;
    chr(a);cout<<endl;
    chr(a,b);

    return 0;
}