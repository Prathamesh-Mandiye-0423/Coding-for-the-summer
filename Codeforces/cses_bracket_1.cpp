#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int M=1e9+7;
const int N=1e6;
ll INV(ll a) {
  return a <= 1 ? a : M - (long long)(M/a) * INV(M % a) % M;
}
ll binexp(ll a,ll b,ll m){
  ll res=1;
  while(b>0){
    if(b%2) res=(a*res)%m;
    a=(a*a)%m;
    b=b/2;
  }
  return res;
}
 
 
int main(){
  	
  	/*for(ll i=1;i<N;i++){
  		fact[i]=(fact[i-1]*1LL*i)%M;
  	}*/
 
	ll n;cin>>n;
	if(n%2){
		cout<<0;return 0;
	}
 
	n/=2;
	ll fact[2*n+1];
	ll inv[2*n+1];
	fact[0]=1;
	for(ll i=1;i<=2*n;i++){
  		fact[i]=(fact[i-1]*i)%M;
  	}
  	
	inv[0]=1;
	for(ll i=1;i<=2*n;i++){
    	inv[i]=binexp(fact[i],M-2,M);
 	 }
 	 ll ans=(fact[2*n]*INV(fact[n]))%M;
 	 ans*=((INV(fact[n]))*(INV(n+1)))%M;
 	 ans%=M;cout<<ans<<'\n';
	/*vector<ll>dp(n+1);
	dp[0]=1;
	dp[1]=1;
	for(ll i=1;i<=n;i++){
		dp[i]+=(dp[i-1]*dp[n-i]);
		dp[i]%=M;
	}
	cout<<dp[n];*/
}
