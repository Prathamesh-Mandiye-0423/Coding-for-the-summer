#include<bits/stdc++.h>

#define ll long long 
const int N=2e6;

using namespace std;

int main () {
    ll t;cin>>t;
    while(t--){
      ll n;cin>>n;
      vector<ll>a(n);
      for(ll i=0;i<n;i++) cin>>a[i];
      ll ans=a[0];
      ll minm=min(0,int(a[0]));
      ll sum=a[0];
      for(ll i=1;i<n;i++){
         if(abs(a[i] % 2) == abs(a[i - 1] % 2)){
            minm=0;sum=0;
         }
         sum+=a[i];
         ans=max(ans,sum-minm); // alt to kadane's
         minm=min(minm,sum);
      }
      cout<<ans<<'\n';
   }
}
