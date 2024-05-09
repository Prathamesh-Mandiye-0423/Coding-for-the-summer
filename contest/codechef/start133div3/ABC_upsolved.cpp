#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	ll t;cin>>t;
	while(t--){
	    ll n;cin>>n;
	    string s;cin>>s;
	    int a=0,b=0,c=0;
	    int ans=0;
    //find the possible subsequence abc
	    for(int i=0;i<n;i++){
	        if(s[i]=='a') a++;
	        if(s[i]=='b' && a>0) b=a;
	        if(s[i]=='c' && a>0 && b>0) {
	            a--;b--;ans++;
            //you want to remove possibility of abc
	        }
	    }
	    cout<<ans<<'\n';
	 
	}

}
