#include<bits/stdc++.h>
#define ll long long
#define vi vector<ll>
#define pb push_back

using namespace std;

int main(){
	
	ll n,s=0,d;
	cin>>n;
	vi a(n);
	for(int i=0;i!=n;i++){
		cin>>a[i];
		s+=a[i];
	}
	d=s/3;
	if(n<3) cout<<0<<endl;
	else if((s%3)!=0) cout<<0<<endl;
	else{
		ll ss = 0;
		vi cnt(n+3,0);
		for(int i=n-1;i>=0;i--){
			ss+=a[i];
			if(ss==d) cnt[i]=1;
		}

		for(int i=n-2;i>=0;i--){
			cnt[i]+=cnt[i+1];
		}

		ll ans = 0;
		ss = 0;
		for(int i=0;i+2<n;i++){
			ss+=a[i];
			if(ss==d) ans+=cnt[i+2];
		}
		cout<<ans<<endl;
	}


	return 0;
}