class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()<3) return -1;
        sort(begin(nums),end(nums));
        return nums[1];
    }
};