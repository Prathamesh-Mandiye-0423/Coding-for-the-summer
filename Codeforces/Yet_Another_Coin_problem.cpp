#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int inf=1e9+20;
const int N=100+10;
int main(){
	vector<ll>coins={1,3,6,10,15};
		vector<ll>dp(N,inf);
		dp[0]=0;
		for(ll i=1;i<=N;i++){
			for(int c:coins){
				if(i-c>=0){
					dp[i]=min(dp[i],dp[i-c]+1);
				}
			}
		}
	ll t;cin>>t;
	while(t--){
		ll n;cin>>n;
		ll ans=0;
		int some_val=(n-70)/15; // mathematically just keep checking
		if(some_val<0) some_val=0;
		ans=some_val;
		n-=some_val*15;
		cout<<dp[n]+ans<<'\n';
	}
}
