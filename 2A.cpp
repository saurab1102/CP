#include<bits/stdc++.h>
#define ll long long
#define vi vector<ll>
#define pb push_back

using namespace std;

int main(){
	ll t;
	cin>>t;
	map<string,vi> m;
	string a; ll b;
	for(int i=1;i<=t;i++){
		cin>>a>>b;
		if(m.find(a)==m.end()) m[a] = vi(t+1,0);
		m[a][i]=b;
	}
	ll ma=-999999999, mac =0;
	for(auto c:m){
		for(int i=1;i<=t;i++) c.second[i]+=c.second[i-1];
		if(ma<c.second[t]){
			ma=c.second[t];
			mac=1;
			a = c.first;
		}
		else if(ma==c.second[t]) mac++;
	}

	if(mac==1) cout<<a<<endl;
	else{
		int j = t;
		for(auto c:m){
			for(int i=1;i<j;i++){
				if(c.second[i]==ma){
					j=i;
					a=c.first;
					break;
				}
				if(i>=j) break;
			}
		}
		cout<<a<<endl;

	}
	
	

	return 0;
}