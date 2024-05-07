//cses coin combinations 2
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod=1e9+7;
int main(){
	int n,tgt;cin>>n>>tgt;
	vector<ll>coins(n);
	for(ll i=0;i<n;i++) cin>>coins[i];
	vector<ll>dp(tgt+1,0);
	dp[0]=1;
	for(int c: coins){
		for(int i=0;i<=tgt;i++){
			if(i-c>=0){
				dp[i]+=dp[i-c]; //dp[i] is the no. of ordered ways to form the sum i
				dp[i]%=mod;    //we loop over the coins such that the order is maintained and no
			} 				   //repetition is found
		}
	}
	cout<<dp[tgt]<<'\n';


}
