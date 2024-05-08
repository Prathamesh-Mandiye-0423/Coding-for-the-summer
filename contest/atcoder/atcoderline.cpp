#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,x,y,z;
	cin>>n>>x>>y>>z;
	if(x>y) swap(x,y);
	if(z>=x && z<=y) cout<<"Yes"<<'\n';
	else cout<<"No"<<'\n';
}
