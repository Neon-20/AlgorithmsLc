class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int global = nums[0];
        int local  =  nums[0];
        for(int i=1;i<n;i++){
           local = max(local+nums[i],nums[i]);
           global = max(local,global);
        }
        return global;
    }
};