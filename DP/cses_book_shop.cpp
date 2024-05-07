#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod=1e9+7;
int main(){
	int n,x;cin>>n>>x;
	vector<int>cost(n),page(n);
	for(int i=0;i<n;i++) cin>>cost[i];
	for(int i=0;i<n;i++) cin>>page[i];
	int dp[n+1][x+1];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=x;j++) {
			dp[i][j]=0;
		}
	}
	for(int i=1;i<=n;i++){
		int curr_c=cost[i-1];
		int curr_p=page[i-1];
		for(int j=1;j<=x;j++){
			dp[i][j]=dp[i-1][j];
			if(curr_c<=j){ //if i can buy the current book,
				// check if you can get more pages for the price
				//than not buying the curr book for the price remaining
				dp[i][j]=max(dp[i][j],dp[i-1][j-curr_c]+curr_p);
			}
		}
	}
	cout<<dp[n][x]<<'\n';

}
