class Solution {
public:
    //Use optimised approach
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
       int prev=nums[0];
       int global=nums[0];
        for(int i=1;i<n;i++)
        {
            prev=max(nums[i],prev+nums[i]);
            global=max(prev,global);
        }
        return global;
    }
};