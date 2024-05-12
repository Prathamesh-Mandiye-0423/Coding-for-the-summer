//calculating inverse using Fermat's
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+10;
vector<ll>fact(N);
vector<ll>inv(N);
const int M=1e9+7;
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
  fact[0]=1;
  for(int i=1;i<N;i++){
    fact[i]=(fact[i-1]*i*1LL)%M;
  }
  inv[0]=1;
  for(ll i=1;i<N;i++){
    inv[i]=binexp(fact[i],M-2,M);
  }
  vector<ll>freq(26);
  string s;cin>>s;
  ll n=s.length();
  for(int i=0;i<n;i++){
    freq[s[i]-'a']++;
  }
  
  ll ans=fact[n];
  for(int i=0;i<26;i++){
    ans=ans*inv[freq[i]];
    ans%=M;
  }
  cout<<ans<<'\n';
}
