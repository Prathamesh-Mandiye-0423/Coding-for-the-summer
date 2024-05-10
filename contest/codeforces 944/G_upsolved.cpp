#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll>v(n);
        map<ll,vector<ll>>a;
      //observation
      //for XOR to be less than 4 or 2^2, last two bits should be different
      //everything else must be the same
      //pair elements with the same bits except last 2 i.e map x and y s.t [x/4]=[y/4]
        for(int i=0;i<n;i++){
            cin>>v[i];
            a[v[i]/4].emplace_back(v[i]);
        }
        for(auto &x:a){
            sort((x.second).begin(),(x.second).end());
            reverse((x.second).begin(),(x.second).end());
        }
        for(int i=0;i<n;i++){
            auto &x=a[v[i]/4];
            cout<<x.back()<<' ';
            x.pop_back();
        }
        cout<<'\n';
        
    }
}
