class Solution {
public:
    int findMin(vector<int>& nums) {
       int n = size(nums);
        //In rotated sorted array find the expectations
        //return the min element in the array
      int left=0;
        int right=size(nums)-1;
        while(left<right){
            int mid=left+(right-left)/2;
            if(nums[mid]>nums[right]){
                left=mid+1;
            }
            else if(nums[mid]<nums[right]){
                right=mid;
            }
            else{
                right--;
            }
        }
        return nums[left];
    }
};