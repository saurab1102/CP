#include<bits/stdc++.h>
#define ll long long
#define vi vector<ll>
#define pb push_back

using namespace std;



int main(){
	ll n,m,a=0;

	cin>>n>>m;

	while(n<m){
		if(m&1) m++;
		else{
			m>>=1;
		}
		a++;
	}


	cout<<a+n-m<<endl;

	return 0;
}