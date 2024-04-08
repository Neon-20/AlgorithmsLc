class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;
        //increasing
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[j-1]>=nums[j]) break;
                ans = max(ans,j-i+1);
            }
            for(int j=i+1;j<n;j++){
                if(nums[j-1]<=nums[j]) break;
                ans = max(ans,j-i+1);
            }
        }
        return ans;
    }
};