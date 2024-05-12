#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e9+7;
ll f(ll x,ll y){
	return (x+y)%N;
}
int main(){
    int t=1;//cin>>t;
    while(t--){
      ll n;cin>>n;
      vector<ll>d(n+1);
      d[1]=0;d[2]=1;
      for(ll i=3;i<=n;i++){
      	d[i]=((i-1)*(d[i-1]+d[i-2])%N);
      }

      cout<<d[n]<<'\n';
    }
}
