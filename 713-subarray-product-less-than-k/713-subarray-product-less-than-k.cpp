class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
         int n=nums.size();
      int ans=0;
        int left=0;
        if(k<=1) return 0;
        int pro=1;
        for(int i=0;i<size(nums);i++){
            //subarray product
            pro*=nums[i];
            while(pro>=k){
                pro/=nums[left];
                left++;
            }
            ans+=i-left+1;
        }
        return ans;
    }
};