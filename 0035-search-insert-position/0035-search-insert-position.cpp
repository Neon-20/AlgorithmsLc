class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        //binary search
        int left = 0;
        int right = n-1;
        int ans = 0;
        while(left<=right){
            int mid = (right-left)+left/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                right = mid-1;
                // ans = mid;
            }
            else{
                left = mid+1;
            }
        }
        return left;
    }
};