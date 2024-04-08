class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
       int n = nums.size();
       int ans = 1;
       for(int inc = 1,dec = 1, i = 1;i<n;i++){
           inc = nums[i-1]<=nums[i] ? 1 : inc+1;
           dec = nums[i-1]>=nums[i] ? 1 : dec+1;
           ans = max({dec,inc,ans});
       }
        return ans;
    }
};