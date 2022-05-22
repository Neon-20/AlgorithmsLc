class Solution {
public:
    int trap(vector<int>& nums) {
     //Trapping rainwater;
        //Time-> O(n), Space-O(1) Approach->Two pointers
        if(size(nums)<=2) return 0;
        int left=0;
        int n=size(nums);
        int right=n-1;
        int largestleft=0;
        int largestright=0;
        int ans=0;
        while(left<right){
            if(nums[right]>nums[left]){
                if(nums[left]>=largestleft)
                {
                    largestleft=nums[left];
                }
                else {
                    ans+=largestleft-nums[left];
                }
                left++;
               }
            else{
                if(nums[right]>=largestright)
                {
                    largestright=nums[right];
                }
                 else {
                     ans+=largestright-nums[right];
                 }
                    right--;
               }
            
        }
        return ans;
    }
};