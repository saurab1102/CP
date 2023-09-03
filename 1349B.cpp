#include<bits/stdc++.h>
#define ll long long
#define vi vector<ll>
#define pb push_back

using namespace std;

int main(){
	ll t;
	cin>>t;
	ll n,k;
	while(t--){
		cin>>n>>k;
		vi a(n);

		bool kp = false;

		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]<k) a[i]=0;
			else if(a[i]==k) a[i]=1,kp=true;
			else a[i]=2;
		}

		if(kp == false) cout<<"no\n";
		else if(n==1) cout<<"yes\n";
		else{
			bool ans = false;
			for(int i=0;i<n;i++){
				for(int j=i+1; j<n && j-i<=2;j++){
					if(a[i] && a[j]) {ans=true;break;}
				}
			}
			if(ans) cout<<"yes\n";
			else cout<<"no\n";
		}
	}

	return 0;
}