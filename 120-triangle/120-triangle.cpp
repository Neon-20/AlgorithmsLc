class Solution {
public:
    int dp[205][205];//top down approach
    int helper(int i,int j,vector<vector<int>> &nums){
        if(i>=nums.size()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int ans=0;
        ans=nums[i][j]+min(helper(i+1,j,nums),helper(i+1,j+1,nums));
        dp[i][j]=ans;
        return ans;
    }
    int minimumTotal(vector<vector<int>>& nums) {
        memset(dp,-1,sizeof(dp));
        return helper(0,0,nums);
    }
};