#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll t;cin>>t;
	while(t--){
		ll n,k,m;cin>>n>>m>>k;
		vector<ll>a(n);
		for(ll i=0;i<n;i++) cin>>a[i];
		sort(a.begin(),a.end());
		ll inc=0;
		ll res=0;
		for(ll i=0;i<n;i++){
			ll b=min(m,k);//if i can take all m i will take all m
			res+=b*(a[i]+inc);
			inc+=b;//price increments by no. of tickets bought
			k-=b;//no. of tickets left
		}
		cout<<res<<'\n';
	}
}
