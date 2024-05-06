#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,k;cin>>n>>k;
	vector<ll>h(n);
	for(ll i=0;i<n;i++) cin>>h[i];
	vector<ll>dp(n,INT_MAX);
	dp[0]=0;
	for(ll i=0;i<n-1;i++){
		for(ll j=1;j<=k;j++){
			if(i+j<n) dp[i+j]=min(dp[i+j],dp[i]+abs(h[i]-h[i+j]));
		}
	}
	cout<<dp[n-1]<<'\n';
}
