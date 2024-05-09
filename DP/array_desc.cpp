//Array Description
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e9+7;
int main(){
    int n,m;cin>>n>>m;
    vector<int>x(n);
    for(int i=0;i<n;i++) cin>>x[i];
    ll dp[n][m+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<=m;j++){
            dp[i][j]=0;
        }
    }
    //dp[i][x[i]]= no. of ways you can fill till index i with value x[i]
    if(x[0]==0){
        for(int j=0;j<=m;j++){
            dp[0][j]=1;// if first elem is 0 then you can atleast replace it by all m's
        }
    }
    else{
        dp[0][x[0]]=1;// you cannot put any ther value as x[0] is already fixed, only possibility to replace at x[0] is x[0] itself
        //hence 1 i.e for x={2,0,2} at index 0 you can replace 2 with only 2 
    }
    for(int i=1;i<n;i++){
        if(x[i]==0){
            for(int j=1;j<=m;j++){
                dp[i][j]+=dp[i-1][j];// no. of ways you can have prev value equal to j
                if(j>1) dp[i][j]+= dp[i-1][j-1];
                if(j<=m-1) dp[i][j]+=dp[i-1][j+1];
                dp[i][j]%=N;
            }
        }
        else{
            dp[i][x[i]]+=dp[i-1][x[i]];
            if(x[i]-1>0) dp[i][x[i]]+=dp[i-1][x[i]-1];
            if(x[i]+1<=m) dp[i][x[i]]+=dp[i-1][x[i]+1];
            dp[i][x[i]]%=N;
        }

    }
    ll ans=0;
    for(int i=1;i<=m;i++){
        ans+=dp[n-1][i];
        ans%=N;
    }
    cout<<ans<<'\n';
}
