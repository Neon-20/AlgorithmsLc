class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
         //Now without using map data structure..How will we do it.
        //vector<int> v(begin(nums),end(nums));
        sort(begin(nums),end(nums));
        // for(int i=1;i<n;i++)
        // {
        //     if(nums[i-1] == nums[i])
        //         return true;
        // }
        // return false;
        
       int prev=nums[0];
        for(int i=1;i<n;i++)
        {
            if(prev == nums[i])
                return true;
            else prev=nums[i];
        }
        return false;
    }
};