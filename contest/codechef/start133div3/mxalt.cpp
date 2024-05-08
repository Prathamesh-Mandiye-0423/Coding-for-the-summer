#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int a[n];
	    for(int i=0;i<=n-1;i++) cin>>a[i];
	    sort(a,a+n,greater<int>()); //3 2 1 ->(3+2)-1
	    //sort(a.begin(),a.end(),greater<int>());
	    int s1=0;
	    int s2=0;
	    if(n%2){
	        for(int i=0;i<(n/2)+1;i++) s1+=a[i];
	        for(int i=(n/2)+1;i<n;i++) s2+=a[i];
	    }
	    else{
	        for(int i=0;i<(n/2);i++) s1+=a[i];
	        for(int i=(n/2);i<n;i++) s2+=a[i];
	    }
	    cout<<s1-s2<<'\n';
	    
	}

}
