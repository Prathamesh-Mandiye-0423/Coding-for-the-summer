#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;cin>>n;
	vector<pair<ll,ll>>v(n);
	for(ll i=0;i<n;i++){
		cin>>v[i].first>>v[i].second;
	}
	//sort(v.begin(),v.end());
	ll s=0;
	ll t=0;

	for(ll i=0;i<n;i++){
		s+=v[i].first;
		t=max(t,v[i].second-v[i].first);
	}
	cout<<t+s<<'\n';
}
