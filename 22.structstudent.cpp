#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    struct students
    {
        string Name;
        int Roll_no;
        int marks;
    }arr[n];
    for (int i = 0; i < n; i++)
    {
        // cout<<"enter Name:";
        cin >> arr[i].Name;
        // cout<<"enter Roll Number:";
        cin >> arr[i].Roll_no;
        // cout<<"enter Marks:";
        cin >> arr[i].marks;
    }
    cout<<setw(15)<<"Name"<<setw(15)<<"Roll number"<<setw(15)<<"Marks";
    for (int i = 0; i < n; i++)
    {
        cout<<endl<<setw(15)<<arr[i].Name;
        cout<<setw(15)<<arr[i].Roll_no;
        cout<<setw(15)<<arr[i].marks;
    }
    return 0;
    
    
}