#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*ll f(int i,int n,int parti,vector<int>&a,vector<vector<int>>&dp){
	//bottoms up
	if(dp[i][parti]!=-1) return dp[i][parti];
	if(i>=n) return 0;//base case end of s
	if(a[i]==0 && a[i-1]==1){
		return dp[i][parti]=1+f(i+1,n,parti,a,dp);

	}
	//dp[i][part]->till index i n. of parts if you make part or not
	return 0;
}*/
int main(){
	ll t;cin>>t;
	while(t--){
		string s;cin>>s;
		int ctr=1;int ok=0;
		int n=s.length();
		for(int i=1;i<n;i++){
			if(s[i]==s[i-1]){
				continue;
			}
			else ctr++;
			if(s[i-1]=='0' && s[i]=='1'){
				ok=1;//sorted part
			}
		}
		cout<<ctr-ok<<'\n';
	}
}
