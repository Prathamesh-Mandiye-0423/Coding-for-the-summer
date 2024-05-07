#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*ll calculate_M(int x,int y,int z){
	int minm;
	if(x<y && x<z) minm=x;
	else if(y<x && y<z) minm=y;
	else minm=z;
	return minm;
}*/
int main(){
    ll n;cin>>n;
      ll dp[n][n];
      for(ll i=0;i<n;i++){
      	for(ll j=0;j<n;j++){
      		dp[i][j]=0;
      	}
      }
      for(ll i=0;i<n;i++){
      	for(ll j=0;j<=i;j++){
      		cin>>dp[i][j];
      	}
      }
      for(ll i=1;i<n;i++){
      	for(ll j=0;j<=i;j++){
      		ll jump=INT_MIN;
      		if(j>0) jump=max(jump,dp[i-1][j-1]);
      		if(j<i) jump=max(jump,dp[i-1][j]);
      		dp[i][j]+=jump;
      	}
      }
      // in the last layer check which state has the max value path
      ll ans=INT_MIN;
      for(ll i=0;i<n;i++){
      	ans=max(ans,dp[n-1][i]);
      }
      cout<<ans<<'\n';

}
