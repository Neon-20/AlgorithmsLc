class Solution {
public:
    int missingNumber(vector<int>& nums) {
int n=size(nums);      
        return n*(n+1)/2- accumulate(begin(nums),end(nums),0ll);
    }
};