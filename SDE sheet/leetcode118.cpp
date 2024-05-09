class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        //int ans=1;
        vector<vector<int>>res;
        vector<int>a;
        for(int i=1;i<=numRows;i++){
            int ans=1;
            vector<int>curr;
            curr.push_back(1);
            for(int j=1;j<i;j++){
                ans=ans*(i-j);
                ans=ans/(j);
                curr.push_back(ans);
            }
            res.push_back(curr);
        }
        return res;
    }
};
