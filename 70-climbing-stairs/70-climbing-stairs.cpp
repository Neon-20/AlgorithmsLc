class Solution {
public:
   
    int solve(int n,vector<int> &dp){
        if(n<=2) return n;
        if(dp[n]!=-1) return dp[n];
        int ans=0;
        ans=solve(n-1,dp)+solve(n-2,dp);
        dp[n]=ans;
        return ans;
    }
    int climbStairs(int n) {
    vector<int> dp(n+1,-1);
        return solve(n,dp);
    }
};