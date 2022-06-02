class Solution {
public:
    int solve(int index,vector<int> &dp,vector<int> &cost){
        if(index>=size(cost)) return 0;
        if(dp[index]!=-1) return dp[index];
        int op1 = cost[index] + solve(index+1,dp,cost);
        int op2 = cost[index] + solve(index+2,dp,cost);
        dp[index]=min(op1,op2);
        return min(op1,op2);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=size(cost);
        vector<int> dp(n+1,-1);
        return  min(solve(0,dp,cost),solve(1,dp,cost));
    }
};