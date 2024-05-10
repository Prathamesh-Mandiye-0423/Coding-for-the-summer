#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;cin>>t;
	while(t--){
		string s;cin>>s;
		int n=s.length();
		vector<ll>f(26);
		for(int i=0;i<n;i++){
			f[s[i]-'a']++;
		}
		ll max_freq=0;
		for(int i=0;i<26;i++){
			max_freq=max(max_freq,f[i]);
		}
		if(max_freq==n){
			cout<<"NO"<<"\n";
		}
		else{
			cout<<"YES"<<'\n';
			for(int i=1;i<n;i++){
				if(s[i]!=s[i-1]){
					swap(s[i],s[i-1]);
					break;
				}
			}
			for(int i=0;i<n;i++){
				cout<<s[i];
			}
			cout<<'\n';
		}
	}
}
