class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1,res=-1;
        vector<int>ans;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                res=mid;
                end=mid-1;
            }
            else if(target<nums[mid])
                end=mid-1;
            else
                start=mid+1;   
        }
        ans.push_back(res);
        start=0,end=nums.size()-1,res=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                res=mid;
                start=mid+1;
            }
            else if(target<nums[mid])
                end=mid-1;
            else
                start=mid+1;   
        }
        ans.push_back(res);
        return ans;
    }
};