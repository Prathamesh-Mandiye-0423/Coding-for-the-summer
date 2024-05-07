#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll calculate_M(int x,int y,int z){
	int minm;
	if(x<y && x<z) minm=x;
	else if(y<x && y<z) minm=y;
	else minm=z;
	return minm;
}
int main(){
    freopen("king2.in", "r", stdin);
	freopen("king2.out", "w", stdout);
	//int n,m;cin>>n>>m;
	/*ll a[8][8];
	for(ll i=0;i<8;i++){
		for(ll j=0;j<8;j++){
			cin>>a[i][j];
		}
	}*/
	ll dp[8][8];
	for(ll i=0;i<8;i++){
		for(ll j=0;j<8;j++){
			cin>>dp[i][j];
		}
	}
	//dp[0][0]=1;
	ll n,m;
	//dp[7][0]=0;
	n=8;
	m=8;
	//dp[0][1]=1;
	for(ll i=n-1;i>=0;i--){
		for(ll j=0;j<n;j++){
			if(i==n-1 && j==0) continue;
			/*if(j==0 && i<n-1) dp[i][j]=dp[i+1][j]+a[i][j];
			if(j>0 && i==n-1) dp[i][j]= dp[i][j-1]+ a[i][j];
			if(i<n-1 && j>0) dp[i][j]=calculate_M(dp[i][j-1],dp[i+1][j],dp[i+1][j-1])+a[i][j];*/
			ll ans=1e18;
			if(i<n-1) ans=min(ans,dp[i+1][j]);
			if(j>0) ans=min(ans,dp[i][j-1]);
			if(i<n-1 && j>0) ans=min(ans,dp[i+1][j-1]);
			dp[i][j]+=ans;//min value path to reach (i,j)	
		}
	}
	cout<<dp[0][7]<<'\n';    
}
