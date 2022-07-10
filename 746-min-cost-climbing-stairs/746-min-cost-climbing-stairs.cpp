class Solution {
public:
      
   int dp[1005];
    int helper(vector<int> &cost,int n){
        if(n<2) return cost[n];
        if(dp[n]!=-1) return dp[n];
        int ans=0;
        ans=cost[n]+min(helper(cost,n-1),helper(cost,n-2));
        dp[n]=ans;
        return ans;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        memset(dp,-1,sizeof(dp));
        return min(helper(cost,n-1),helper(cost,n-2));
    }
};