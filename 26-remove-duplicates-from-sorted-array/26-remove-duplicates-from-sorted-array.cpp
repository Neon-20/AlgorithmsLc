class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      // remove duplicates
       int n=size(nums);
        int l=1;
        for(int r=1;r<n;r++){
            if(nums[r]!=nums[r-1])
                nums[l++]=nums[r];
        }
        return l;
    }
};