class Solution {
public:
    const int mod=1e9+7;
    int countHousePlacements(int n) {
        //number of ways to place houses
        //No two houses are adjacent to each other
        vector<long long> dp(n+1,0);
        dp[0]=1;
        dp[1]=2;
        for(int i=2;i<=n;i++){
            dp[i]=(dp[i-1]+dp[i-2])%mod;
        }
        return dp[n]*dp[n]%mod;
    }
};