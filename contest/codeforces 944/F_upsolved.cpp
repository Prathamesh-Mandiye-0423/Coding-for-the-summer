#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
       ll r;cin>>r;
       ll ans=0;
       ll y=r;
       for(ll x=0;x<=r;x++){
       	while(x*x + y*y >=(r+1)*(r+1)){
       		y--;
       	}
       	ll n=y;
       	while(n*n+x*x>=r*r && n>0){
       		ans++;n--;
       	}

       }
       cout<<4*ans<<'\n';
    }
}
