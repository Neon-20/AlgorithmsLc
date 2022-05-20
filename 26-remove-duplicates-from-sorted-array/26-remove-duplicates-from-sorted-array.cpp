class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      // remove duplicates
        int n=nums.size();
        int cnt=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]==nums[i])
               cnt++;//all same elements
            else
                nums[i-cnt]=nums[i]; 
        }
            return n-cnt;
    }
};