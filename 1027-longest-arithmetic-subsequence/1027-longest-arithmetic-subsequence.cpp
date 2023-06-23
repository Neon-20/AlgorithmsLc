class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int n=nums.size();
        int res=2;
        vector<vector<int>> dp(n,vector<int>(2000,0));
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int difference = nums[j]-nums[i]+1000;
          dp[j][difference] = max(2,dp[i][difference]+1);
          res = max(res,dp[j][difference]);
            }
        }
        return res;
    }
};