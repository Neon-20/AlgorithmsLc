class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        //use k steps to rotate the array
      k%=n;
      reverse(begin(nums),end(nums));// 7654321
      reverse(begin(nums)+k,end(nums));// 7651234
      reverse(begin(nums),begin(nums)+k);
    } 
};