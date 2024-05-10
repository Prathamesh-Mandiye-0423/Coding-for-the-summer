#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        ll n,k,q;cin>>n>>k>>q;
        vector<ll>a(k),b(k);
        for(int i=0;i<k;i++) cin>>a[i];
        for(int i=0;i<k;i++) cin>>b[i];
        while(q--){
        	ll d;cin>>d;
        	ll lb=lower_bound(a.begin(),a.end(),d)-a.begin();
        	if(a[lb]==d){
        		cout<<b[lb]<<' ';continue;
        	}
        	if(lb==0){
        		ll time=d*b[0]/a[0];
        		cout<<time<<' ';continue;
        	}
        	ll x1=b[lb-1];
        	ll y1=a[lb-1];
        	ll x2=b[lb];
        	ll y2=a[lb];
        	ll time=x1 + (((d-y1)*(x2-x1))/(y2 - y1));
        	cout<<time<<' ';
        }	
        cout<<'\n';
    }
}
