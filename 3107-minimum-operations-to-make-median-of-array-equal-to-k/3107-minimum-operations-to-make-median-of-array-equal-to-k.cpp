class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        sort(begin(nums),end(nums));
        int n = nums.size();
        //increase or decrease 
        long long ans = 0;
        for(int i=0;i<=n/2;i++){
            if(nums[i]>k) ans+=nums[i]-k;
        }
        for(int i=n/2;i<n;i++){
            if(nums[i]<k) ans+=k-nums[i];
        }
        return ans;
    }
};