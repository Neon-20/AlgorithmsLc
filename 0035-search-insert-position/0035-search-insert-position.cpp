class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        //binary search
        return std::lower_bound(begin(nums),end(nums),target)-begin(nums);
    }
};