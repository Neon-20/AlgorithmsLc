class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<high){
            int mid=low+(high-low+1)/2;
            if(nums[mid]>target) high=mid-1;
            else low=mid;
        }
        return nums[low]==target?low:-1;
    }
};