#include<bits/stdc++.h>

using namespace std;

void checkprime(int n){
	bool check=0;
	for(int i = n/2 ; i>1;i--){
		if (n%i==0){
			check =1;
			break;
		}
	}
	if (check==0){
		cout<<n<<" is prime no."<<endl;
	}
	else {
		cout<<n<<" is not a prime no."<<endl;;
	}
}
int main(){
    int t;//
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n ;
        cin>>n;
        checkprime(n);
    }
    return 0;


}