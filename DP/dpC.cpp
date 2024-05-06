//https://codeforces.com/gym/100135 <--link to the problemset
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    freopen("knight.in", "r", stdin);
	freopen("knight.out", "w", stdout);
	int n,m;cin>>n>>m;
	//initialize all to zero
	ll dp[n][m];
	for(ll i=0;i<n;i++){
		for(ll j=0;j<m;j++){
			dp[i][j]=0;
		}
	}
	//dp[0][0]=1;

	dp[0][0]=1;
	//dp[0][1]=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i>1 && j>0) dp[i][j]+=dp[i-2][j-1];
			if(i>0 && j>1) dp[i][j]+=dp[i-1][j-2];
		}
	}
	cout<<dp[n-1][m-1]<<'\n';    
}
