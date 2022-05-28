class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=nums.size();
        for(int i=0;i<size(nums);i++){
            ans^=i;//2 3
            ans^=nums[i];//2 2
        }
        return ans;
    }
};