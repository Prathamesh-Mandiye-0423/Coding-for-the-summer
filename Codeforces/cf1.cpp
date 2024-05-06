//Quests
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll t;cin>>t;
	while(t--){
		ll n,k;cin>>n>>k;
		vector<ll>a(n),b(n),pref(n);
		for(ll i=0;i<n;i++) cin>>a[i];
		for(ll i=0;i<n;i++) cin>>b[i];
		ll p=0;
		for(ll i=0;i<n;i++){
			p+=a[i];
			pref[i]=p; //summation till i
		}
		ll maxm=INT_MIN;
		ll res=INT_MIN;
		for(ll i=0;i<min(n,k);i++){
			res=max(res,b[i]);
			maxm= max(maxm,pref[i]+(res*(k-i-1)));
		}
		cout<<maxm<<'\n';
	}
}
