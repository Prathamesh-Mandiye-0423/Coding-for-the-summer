#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;cin>>t;
	while(t--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		bool p1,p2;
		p1=p2=0;
		int up=max(a,b);
		//cout<<up<<'\n';
		a=min(a,b);
		//cout<<a<<'\n';
		b=up;//a is the lower value of the clock 
		// b is the max value of the clock
		//cout<<b<<'\n';
		for(int i=a;i<=b;i++){
			if(c==i) {
			p1=true;
			}//run the clock and find if these two lie between the range
			if(d==i){
				p2=true;
			}
		}
		

		if(p1&&p2 || (!p1&&!p2)) cout<<"NO"<<'\n';
		else cout<<"YES"<<'\n';
		
	}
}
