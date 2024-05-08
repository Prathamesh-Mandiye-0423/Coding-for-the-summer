#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll pow(ll base,ll exp){
    ll res=1;
    while(exp>0){
        if(exp&1) res=res*base;
        base=base*base;
        exp>>=1;
    }
    return res;
}

int main() {
	// your code goes here
	ll t;cin>>t;
	while(t--){
	    ll n;cin>>n;
	    vector<ll>a(n+1);
	    for(ll i=1;i<=n;i++) cin>>a[i];
	    ll ans=0;//ctr
	    for(ll i=1;i<=n;i++){
	        ll left=a[i];//curr
	        if(left==1){
	            ans+=n;//all other indexes are greater or equal
	        }
	        else{
	           ll base=1;
	           for(int j=1;j<=n;j++){
	                if(base>1e9){
	                    base=1e9;break;
	                }
	                //base*=left;
	                base=pow(left,j);//logn
	                ll right=a[j];
	                if(base<=right){
	                    ans++;
	                }
	            } 
	        }
	        
	    }
	    cout<<ans<<'\n';
	}

}
