class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        //subarray product less than K
        int n=size(nums);
        // keep a max product window of size 
        if(k<=1) return 0;
        int product=1;
        int ans=0;
           int left=0;
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