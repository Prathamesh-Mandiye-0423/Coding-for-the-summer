#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	string c,s;cin>>c>>s;
	ll n=c.length();
	ll m=s.length();
	vector<ll>ans;
	ll i=0;
	while(i<n){
		ll j=i;
		while(j<m){
			if(c[i]==s[j]){
				ans.push_back(j);
				i++;j++;
			}
			else{
				j++;
			}
		}
	}
	for(auto x:ans){
		cout<<x+1<<' ';
	}
	cout<<'\n';
}
