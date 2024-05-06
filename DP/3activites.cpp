#include<bits/stdc++.h>

#define ll long long 
const int N=2e6;

using namespace std;

int main () {
    ll t;cin>>t;
    while(t--){
      ll n;cin>>n;
      vector<pair<ll,ll>>a(n),b(n),c(n);
      for(ll i=0;i<n;i++){
         cin>>a[i].first;
         a[i].second=i;
      }
      for(ll i=0;i<n;i++){
         cin>>b[i].first;
         b[i].second=i;
      }
      for(ll i=0;i<n;i++){
         cin>>c[i].first;
         c[i].second=i;
      }
      sort(a.begin(),a.end());
      sort(b.begin(),b.end());
      sort(c.begin(),c.end());
      ll ans=INT_MIN;
      for(ll x=0;x<3;x++){
         for(ll y=0;y<3;y++){
            for(ll z=0;z<3;z++){
               if(a[n-x-1].second!=b[n-y-1].second && b[n-y-1].second!=c[n-z-1].second && c[n-z-1].second!=a[n-x-1].second){
                  ans=max(ans,a[n-x-1].first+b[n-y-1].first+c[n-z-1].first);
               }
            }
         }
      }
      cout<<ans<<'\n';
   }
}
