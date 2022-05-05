class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        //length of longest increasing subsequence
        int ans=1;
        vector<int> dp(n,1);
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
               if(nums[i]>nums[j]) 
                dp[i]=max(dp[i],dp[j]+1);
                // dp[i]=ans;
            }
        }
        return *max_element(dp.begin(),dp.end());
    }
};