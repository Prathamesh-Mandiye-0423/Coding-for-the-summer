#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ll n,k;cin>>n>>k;
  vector<ll>v(n);
  for(int i=0;i<n;i++){
    int x;cin>>x;
    v[x-1]=i;
  }
  set<ll>s;
  for(ll i=0;i<k;i++){
    s.insert(v[i]);
  }
  ll res=*s.rbegin()-*s.begin();//initial difference
  for(int i=k;i<n;i++){
    s.erase(v[i-k]);//removeto add and check anther
    s.insert(v[i]);
    res=min(res,*s.rbegin()-*s.begin());
  }
  cout<<res<<'\n';
}
