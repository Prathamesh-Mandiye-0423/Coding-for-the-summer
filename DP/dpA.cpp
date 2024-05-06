#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  // Old Questions might require this
    freopen("ladder.in", "r", stdin);
	freopen("ladder.out", "w", stdout);
    ll n;cin>>n;
    vector<ll>a(n+1),dp(n+1);
    for(ll i=1;i<=n;i++) cin>>a[i];
    dp[1]=a[1];
    //ll sum=0;
    for(ll i=2;i<=n;i++){
        dp[i]=a[i];
        dp[i]+=max(dp[i-1],dp[i-2]);
    }
    cout<<dp[n]<<'\n';
}
