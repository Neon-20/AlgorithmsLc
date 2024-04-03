class Solution {
public:
    const int mod = 1e9+7;
    int dp[14][1<<14];
    int helper(int i,int mask,vector<int> &nums){
        int n = nums.size();
        if(mask == (1<<n) - 1){
            return 1;
        }
        if(dp[i][mask] == -1){
            dp[i][mask] = 0;
            for(int j=0;j<n;j++){
if((mask & (1<<j)) == 0 && (mask == 0 or nums[j]%nums[i] == 0 or nums[i]%nums[j] == 0)){
         dp[i][mask] = (dp[i][mask] + helper(j,mask+(1<<j),nums))%mod;
                }
            }
        }
        return dp[i][mask] ;
    }
    int specialPerm(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return helper(0,0,nums);
    }
};