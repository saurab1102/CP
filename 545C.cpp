#include<bits/stdc++.h>
#define ll long long
#define vi vector<ll>
#define pb push_back

using namespace std;

int main(){
	ll n;
	cin>>n;

	vector<pair<int,int>> a,left,right;

	ll x,y;

	for(int i=0;i<n;i++){
		cin>>x>>y;
		a.pb({x,y});
		left.pb({x-y,x});
		rigth.pb({x,x+y});
	}

	return 0;
}