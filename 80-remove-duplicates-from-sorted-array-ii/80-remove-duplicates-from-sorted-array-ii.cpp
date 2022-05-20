class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        //each unique elements appears twice
        // first cnt all the same elements
         int i=0;
        for(int x:nums){
            if(i<2 or x>nums[i-2])
                nums[i++]=x;
        }
        return i;
    }
};