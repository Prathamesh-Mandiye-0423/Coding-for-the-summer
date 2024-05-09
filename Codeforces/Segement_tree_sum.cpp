#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll>tree;
//Building Tree
ll f(ll v,ll tl,ll tr,ll l,ll r){
	if(l<=tl && tr<=r){
		return tree[v];
	}
	if(tr<l || r<tl){
		return 0;
	}
	ll tm=(tl+tr)/2;
	return f(2*v,tl,tm,l,r)
	+f(1+2*v,tm+1,tr,l,r);
}
 
void update(int i,int v,int n){
	tree[n+i]=v;
	for(ll j=(n+i)/2;j>=1;j/=2){
		tree[j]=tree[2*j]+tree[2*j+1];
	}
}
 
 
int main(){
	ll n,q;cin>>n>>q;
	vector<ll>a(n);
	for(ll i=0;i<n;i++) cin>>a[i];
	while(__builtin_popcount(n)!=1){
		a.push_back(0);n++;//Make powers even
	}
	tree.resize(2*n);
	//Build Tree
	for(int i=0;i<n;i++){
		tree[n+i]=a[i];
	}
	for(int i=n-1;i>=1;i--){
		tree[i]=tree[2*i]+tree[2*i+1];
	}
	while(q--){
		int type;cin>>type;
		if(type==1){
			int i,v;cin>>i>>v;
			i;update(i,v,n);
		}
		else{
			int a,b;cin>>a>>b;
			a;b;
			cout<<f(1,0,n-1,a,b-1)<<'\n';
		}
	}
}
