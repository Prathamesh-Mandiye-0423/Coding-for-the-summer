#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
   freopen("lepus.in", "r", stdin);
	freopen("lepus.out", "w", stdout);
	int n;cin>>n;
	string s;cin>>s;
	vector<ll>dp(n,-1);
	dp[0]=0;//We start from an empty cell
	//No. of cells visited to reach next state
	for(ll i=1;i<n;i++){
	    if(s[i]=='w') continue;//Swap Encountered skip i
	    ll jump=0;
	    for(ll k=1;k<=5;k+=2){
	        if(i>=k && dp[i-k]!=-1){
	            jump=max(jump,dp[i-k]);
	            dp[i]=0; //i has been visited
	        }
	    }
	    if(dp[i]==0 && s[i]=='"'){
	        dp[i]++; // grass encountered
	    }
	    dp[i]+=jump;//No. of grasses visted till state i
	}
	cout<<dp[n-1]<<'\n';	
    
}
