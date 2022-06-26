class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
       int n=size(nums)-1;
        int sum=accumulate(begin(nums),begin(nums)+k,0);
        int ans=sum;
        while(k--){
            sum-=nums[k];
            sum+=nums[n];
            ans=max(ans,sum);
            n--;
        }
        return ans;
    }
};