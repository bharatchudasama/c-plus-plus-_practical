#include<iostream>
using namespace std;

int pattern16(int n){
    for (int i = 0;i<n;i++){
        for(int j = n-i ;j>0;j--){
            cout<<"@";
        }
        for(int j = 0 ;j<i+1;j++){
            cout<<"%";
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin >> t;
    for (int i =0;i<t;i++){
        int n ;
        cin >>n;
        pattern16(n);
        cout<<"-----------------------"<<endl;
    }

}
