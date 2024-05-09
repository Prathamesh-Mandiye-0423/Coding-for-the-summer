#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod=1e9+7;
int main(){
	ll n,w;cin>>n>>w;
	vector<ll>wt(n),v(n);
	for(ll i=0;i<n;i++){
		cin>>wt[i]>>v[i];
	}
	ll dp[n][w+1];
	for(ll i=0;i<n;i++){
		for(ll j=0;j<=w;j++){
			dp[i][j]=0;
		}
	}
  //dp[i][j]-> till index i what is the max value you can get for weight of bag j
	for(ll i=wt[0];i<=w;i++){
		dp[0][i]=v[0];// till index 0 you can only have value of 0 th elem.
	}
	for(ll i=1;i<n;i++){
		for(ll j=0;j<=w;j++){
			ll not_take=0+dp[i-1][j];
			ll take=INT_MIN;
			if(wt[i]<=j){
				take=v[i]+dp[i-1][j-wt[i]];
			}
			dp[i][j]=max(take,not_take);
		}
	}
	cout<<dp[n-1][w]<<'\n';

}
