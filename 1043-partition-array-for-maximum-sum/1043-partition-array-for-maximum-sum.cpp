class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
       int n=arr.size();
        // max sum after partitioning the array
        long long ans=0;
        vector<int> dp(n+1);
        for(int i=1;i<=n;i++){
            int current=0;
            int best=0;
            for(int j=1;j<=k and i-j>=0;j++){
                current=max(current,arr[i-j]);
                best=max(best,dp[i-j]+current*j);
            }
            dp[i]=best;
        }
        return dp[n];
    }
};