#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		ll pairs=0;
		ll n,m;cin>>n>>m;
		for(ll i=1;i<=m;i++){
			pairs+=(n+i)/(1ll*i*i);

		}
		cout<<pairs-1<<"\n";
	}
}
