class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        //we dont need to sort over here right
    int n = nums.size();
    sort(begin(nums),end(nums));
        long long ans = 0;
    for(int i=0;i<=(int)nums.size()/2;i++){
        if(nums[i]>k) ans+=nums[i]-k; // 2
    }
        for(int i=(int)nums.size()/2;i<n;i++){
            if(nums[i]<k) ans+=k-nums[i];
        }
        return ans;
    }
};
// 2,5,6,8,5
// 2 5 5 6 8