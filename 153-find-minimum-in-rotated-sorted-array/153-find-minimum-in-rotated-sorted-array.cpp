class Solution {
public:
    int findMin(vector<int>& nums) {
       int l = 0;  
       int r = size(nums)-1;  
        while(l<r){
            int mid=l+(r-l)/2;
            if(nums[mid]>nums[r])
                l=mid+1;
            else r=mid;
        }
        return nums[l];
    }
};