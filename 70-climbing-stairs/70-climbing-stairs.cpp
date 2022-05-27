class Solution {
public:
    // int dp[50];
    int solve(int n,vector<int> &dp){
        if(n<=2) return n;
        if(dp[n]!=-1) return dp[n];
        int ans=0;
        ans=solve(n-1,dp)+solve(n-2,dp);
        dp[n]=ans;
        return ans;
    }
    int climbStairs(int n) {
        // memset(dp,-1,sizeof(dp));
        vector<int> dp(n+1,-1);
        return solve(n,dp);
    }
};