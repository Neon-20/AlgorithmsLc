class Solution {
public:
    int maximumEnergy(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> dp(n,INT_MIN);
        int ans = INT_MIN;
        for(int i=n-1;i>=0;i--){
             dp[i] = nums[i];
            if(i+k<n){
              dp[i]+=dp[i+k]; 
            }
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};
// 