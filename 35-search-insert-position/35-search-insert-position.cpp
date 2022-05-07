class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        //just find lower bound of the element
        return lower_bound(begin(nums),end(nums),target)-nums.begin();
    }
};