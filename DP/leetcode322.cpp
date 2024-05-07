#define ll long long
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<ll>dp(amount+1);
        dp[0]=0;
        for(int x=1;x<=amount;x++){
            dp[x]=INT_MAX;
            for(int c:coins){
                if(x-c>=0) dp[x]=min(dp[x],dp[x-c]+1);
            }
        }
        if(dp[amount]==INT_MAX) return -1;
        return dp[amount];
    }

};
