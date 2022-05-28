class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        //subarray product less than K
        int n=size(nums);
        int product=1;
        int left=0;
        int ans=0;
        if(k<=1) return 0;
        for(int i=0;i<n;i++){
            product*=nums[i];
            while(product>=k){
                product/=nums[left];
                left++;
            }
            ans+=i-left+1;
        }
        return ans;
        
    }
};