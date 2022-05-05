class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int n=nums.size();
        int local=nums[0],global=nums[0];
        for(int i=1;i<n;i++){
            local=max(nums[i],nums[i]+local);
            global=max(global,local);
        }
        return global;
    }
};