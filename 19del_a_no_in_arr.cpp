#include<bits/stdc++.h>

using namespace std;

int main(){
    int n ;cin>>n;
    int arr[n];
    // input array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"print array:";
    for(int i = 0 ; i < n ; i++ ){
        cout<<arr[i]<< " ";
    }
    // deletion 
    int target;cin>>target;
    int check;
    for(int i = 0;i<n;i++){
        if (arr[i]==target){
            for(int j = i ;j<n;j++){
                arr[j]=arr[j+1];
            }
            break;
        }
    }
    // printing array
    cout<<"\nprint array:";
    for(int i = 0 ; i < n-1 ; i++ ){
        cout<<arr[i]<< " ";
    }

}