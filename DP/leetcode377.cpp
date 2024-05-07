#define ll long long
class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {

        vector<unsigned int>dp(target+1,0); // use unsigned to prevent overflow
        dp[0]=1;
        ll n=nums.size();
        for(ll x=1;x<=target;x++){
            for(ll i=0;i<n;i++){
                if(x-nums[i]>=0){
                    dp[x]+=dp[x-nums[i]];
                }
            }
        }
        return dp[target];

    }
};
