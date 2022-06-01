class Solution {
public:
    int search(vector<int>& nums, int target) {
        //if it is in nums or if it is not in nums
        //Use binary search
        int left=0;
        int right=size(nums)-1;
        while(left<right){
            int mid=(left+right)/2;
            if(nums[mid] == target) return mid;
            if(nums[left]<=nums[mid]){//left pointer se bade ho aap
                if(target<nums[mid] and target>=nums[left]){
                    right=mid-1;// portion search
                }
                else{
                    left=mid+1;
                }
            }
            else   {//right sorted portion
                if(target>nums[mid] and target<=nums[right]){
                    left=mid+1;
                }
                else right=mid-1;
            }  
        }
        return nums[left]==target ? left:-1;
    }
};