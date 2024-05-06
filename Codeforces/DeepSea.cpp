#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll t;cin>>t;
	while(t--){
		ll n,k;cin>>n>>k;
		vector<ll>a(n);
		ll sum=0;
		for(ll i=0;i<n;i++) {
			cin>>a[i];
			sum+=a[i];
		}
		ll l=0,r=n-1;
		ll ctr=0;

		while((l<=r) && k){
			if(l==r){
				if(k>=a[l]){
					ctr++;break;
				}
			}
			ll m=min(a[l],a[r]);
			if(k<2*m){
				a[l]-=(k/2)+(k%2);
				a[r]-=(k/2);
				k=0;
			}
			else{
				a[l]-=m;
				a[r]-=m;
				k-=2*m;
			}
			if(a[l]<=0){
				ctr++;l++;
			}
			if(a[r]<=0){
				ctr++;r--;
			}
		}

		/*if(sum<=k){
			cout<<n<<'\n';
		}
		else cout<<ctr<<'\n';*/
		cout<<ctr<<'\n';
	}
}
