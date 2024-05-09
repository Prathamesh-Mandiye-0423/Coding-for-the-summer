#define ll long long
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        ll dp[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                dp[i][j]=INT_MAX;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0&&j==0){
                    dp[i][j]=grid[i][j];
                }
                else{
                    int up=INT_MAX;
                    if(i) up=dp[i-1][j]+grid[i][j];
                    //else up=INT_MAX;
                    int left=INT_MAX;
                    if(j) left=dp[i][j-1]+grid[i][j];
                    //else left=INT_MAX;
                    dp[i][j]=min(up,left);
                }
            }
        }
        return dp[n-1][m-1];
    }
};
