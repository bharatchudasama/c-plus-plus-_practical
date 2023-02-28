#include <iostream>
#include <iomanip>
using namespace std;
void arr(int arr1[][5], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr1[i][j];
        }
    }
}
void prarr(int arr1[][5], int n)
{
    cout << setw(9) << "student";
    cout << setw(4) << "s1";
    cout << setw(4) << "s2";
    cout << setw(4) << "s3";
    cout << setw(4) << "s4";
    cout << setw(4) << "s5" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << setw(8) << "stu-" << i + 1;
        for (int j = 0; j < 5; j++)
        {
            cout << setw(4) << arr1[i][j];
        }
        cout << endl;
    }
}
void savgarr(int arr1[][5], int n)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < 5; j++)
        {
            sum += arr1[i][j];
        }
        cout << setw(8) << "averge marks of student " ;
        cout<< i + 1 << " are: " << sum/5<<endl;
    }
}
void subavgarr(int arr1[][5], int n)
{
    for (int j = 0; j < 5; j++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr1[i][j];
        }
        cout << setw(8) << "averge marks of subject " ;
        cout<< j + 1 << " are: " << sum/n<<endl;
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr1[n][5];
        arr(arr1, n);
        prarr(arr1, n);
        savgarr(arr1, n);
        subavgarr(arr1, n);

        cout << "-----------------------" << endl;
    }
}