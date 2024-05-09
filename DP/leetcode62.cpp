#define ll long long
class Solution {
public:
    int uniquePaths(int m, int n) {
        ll dp[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                dp[i][j]=0;
            }
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0) dp[i][j]=1;
                else{
                    int u=0,l=0;
                    if(j>0) dp[i][j]+=dp[i][j-1];
                    if(i>0) dp[i][j]+=dp[i-1][j];
                    //dp[i][j]=u+l;
                }
                
            }
        }
        return dp[m-1][n-1];

    }
};
