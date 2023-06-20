class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        int n=nums.size();
        sort(begin(nums),end(nums));
        int ans=INT_MAX;
        for(int i=1;i<n;i++){
            ans=min(ans,nums[i]-nums[i-1]);
        }
        return ans;
    }
};