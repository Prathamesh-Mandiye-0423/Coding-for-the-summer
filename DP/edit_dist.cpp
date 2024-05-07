//edit distance
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string a,b;cin>>a>>b;
    ll n=a.length();
    ll m=b.length();
    ll dp[n+1][m+1];
    for(int i=0;i<=n;i++){
    	for(int j=0;j<=m;j++){
    		dp[i][j]=INT_MAX;
    	}
    }
    //dp[i][j]=min no. of moves required s.t a[0...i] and b[0...j] are matched
    //dp[i][j-1] you deleted an element from a
    //dp[i-1][j] you del an element a[i-1] from a
    dp[0][0]=0;
    for(int i=0;i<=n;i++){
    	for(int j=0;j<=m;j++){
    		if(i) dp[i][j]=min(dp[i][j],1+dp[i-1][j]);
    		if(j) dp[i][j]=min(dp[i][j],1+dp[i][j-1]);
    		if(i&&j) dp[i][j]=min(dp[i][j],dp[i-1][j-1]+(a[i-1]!=b[j-1]));
    	}
    }
    cout<<dp[n][m]<<'\n';
}
