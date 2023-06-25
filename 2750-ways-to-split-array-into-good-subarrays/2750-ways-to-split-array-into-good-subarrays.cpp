class Solution {
public:
    const int mod = 1e9 + 7;
    int numberOfGoodSubarraySplits(vector<int>& nums) {
        int n=nums.size();
        long long cnt=0;
        //good subarray
        long long ans=1,i=0;
        while(i<n and nums[i]==0) i++;
        if(i>=n) return 0;
        while(i<n){
            if(nums[i]==1){
                ans=(ans*(cnt+1))%mod;
                cnt=0;
            }
            else{
                cnt++;
            }
            i++;
        }
        return ans;
    }
};