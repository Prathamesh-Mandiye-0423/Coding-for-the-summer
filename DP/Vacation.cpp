//Vacation Atcoder
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n;cin>>n;
	ll dp[n+1][3];
	for(ll i=0;i<n+1;i++){
		for(ll j=0;j<3;j++){
			dp[i][j]=0;
		}
	}
	for(ll i=1;i<=n;i++){
		int a,b,c;cin>>a>>b>>c;
		dp[i][0]=max(dp[i][0],max(dp[i-1][1]+b,dp[i-1][2]+c));
		//dp[i][j] represents the maximum value task performed on i'th day
		//considering either j'th task was performed on i'th day
		//or a better option was taken by performing one of the remainig tasks other than j
		//on i-1 th day
		dp[i][1]=max(dp[i][1],max(dp[i-1][0]+a,dp[i-1][2]+c));
		dp[i][2]=max(dp[i][2],max(dp[i-1][0]+a,dp[i-1][1]+b));
	}
	cout<<max(dp[n][0],max(dp[n][1],dp[n][2]))<<'\n';
	

}
