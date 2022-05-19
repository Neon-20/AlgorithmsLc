class Solution {
public:
    int dp[105][105];
    int recur(int i,int j,vector<vector<int>> &nums){
       int n=nums.size();
       int m=nums[0].size();
       if(i>=n or j>=m) return 0;
       if(nums[i][j]==1) return 0;
    if(i==n-1 and j==m-1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        int ans=0;
        ans+=recur(i+1,j,nums)+recur(i,j+1,nums);
        return dp[i][j]=ans;
        return ans;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& nums) {
       //Wherever obstacle then dont go there
        memset(dp,-1,sizeof(dp));
        return recur(0,0,nums);
        //aage se last tak;
    }
};