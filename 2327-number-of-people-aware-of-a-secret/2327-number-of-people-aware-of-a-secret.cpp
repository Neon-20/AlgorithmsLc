class Solution {
public:
  const int mod=1e9+7;
    int peopleAwareOfSecret(int n, int delay, int forget) {
        vector<int> dp(n,0);
        dp[0]=1;
        for(int i=0;i<n;i++){
            for(int j=i+delay;j<i+forget and j<n;j++){
                dp[j]=(dp[i]+dp[j])%mod;
            }
        }
        int ans=0;
        for(int i=n-1;i>=n-forget;i--){
            ans+=dp[i];
            ans%=mod;
        }
        return ans;
    }
};