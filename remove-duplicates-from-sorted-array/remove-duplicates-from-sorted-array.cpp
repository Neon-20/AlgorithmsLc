class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i] == nums[i-1]) cnt++;
            else nums[i-cnt]=nums[i];
        }
        return n-cnt;
    }
};