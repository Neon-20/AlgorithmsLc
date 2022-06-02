class Solution {
public:
    int missingNumber(vector<int>& nums) {
  int n=size(nums);
        int ans=0;
        for(int i=0;i<n;i++){
            ans^=i;
            ans^=nums[i];
        }
        return ans^n;
    }
};