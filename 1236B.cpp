#include<bits/stdc++.h>
#define ll long long
#define vi vector<ll>
#define pb push_back
#define mod 1000000007

using namespace std;

ll binpow(ll a,ll b){
	if(b==0) return 1;
	if(b==1) return a;
	ll temp = binpow(a,b/2)%mod;
	if(b&1){
		return (temp*((temp*a)%mod))%mod;
	}
	return (temp*temp)%mod;
}

int main(){
	ll n,m;
	cin>>n>>m;
	cout<<binpow(binpow(2,m)-1,n);

	return 0;
}