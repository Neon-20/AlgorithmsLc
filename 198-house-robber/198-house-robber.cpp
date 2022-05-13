class Solution {
public:
    int recur(vector<int> &dp,int index,vector<int> &nums){
        if(index>=nums.size()) return 0;
        if(dp[index]!=-1) return dp[index];
        else
    dp[index]=max(recur(dp,index+1,nums),nums[index]+recur(dp,index+2,nums));
return dp[index];
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1,-1);
        return recur(dp,0,nums);
    }
};