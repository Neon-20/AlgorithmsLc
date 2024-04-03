class Solution {
public:
    int dp[14][1<<14];
    const int MOD = 1e9+7;
    int helper(int i,int mask,vector<int> &nums){
        int n = nums.size();
        if(mask == (1<<n) - 1){
            return 1;
        }
        if(dp[i][mask]==-1){
            dp[i][mask] = 0;
        for(int j=0;j<n;j++){
if((mask & (1<<j)) == 0 and (mask == 0 || nums[i]%nums[j]==0 || nums[j]%nums[i] == 0)){
    dp[i][mask] = (dp[i][mask] + helper(j,mask+(1<<j),nums))%MOD;
        }
            }
        }
        return dp[i][mask];
    }
    int specialPerm(vector<int>& nums) {
        int n = nums.size();
        memset(dp,-1,sizeof(dp));
        return helper(0,0,nums);
    }
};