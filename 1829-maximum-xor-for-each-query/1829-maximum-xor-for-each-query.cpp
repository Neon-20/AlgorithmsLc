class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n=nums.size();
        vector<int> ans(n);
        int value=(1<<(maximumBit))-1;
        for(int i=0;i<n;i++)
        {
            ans[n-i-1]=value^=nums[i];
        }
        return ans;
          
    }
};