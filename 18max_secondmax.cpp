#include<iostream>
using namespace std;
void arr(int arr1[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"enter marks:"<<i+1<<" : ";
        cin >> arr1[i];
    }
}
int fmax(int arr1[], int n)
{
    int temp=arr1[0];
    for (int i = 1; i < n; i++)
    {
        if (arr1[i]>temp){temp=arr1[i];}
    }
    return temp;
}
int smax(int arr1[], int n,int max)
{   
    int temp=arr1[0];
    // cout<<temp<<endl;
    for (int i = 1; i < n; i++)
    {
        // cout<<arr1[i]<<endl;
        if (arr1[i]>temp && arr1[i]<max)
        {
            temp=arr1[i];
            }
    }
    return temp;
}

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;cout<<"enter array size : ";cin>>n;
        int arr1[n];
        arr(arr1,n);
        int fimax=fmax(arr1,n);
        int simax=smax(arr1,n,fimax);
        cout<<"max marks: "<<fimax<<endl;
        cout<<"second highest marks: "<<simax<<endl;
        cout<<"---------------------\n";
    }
}