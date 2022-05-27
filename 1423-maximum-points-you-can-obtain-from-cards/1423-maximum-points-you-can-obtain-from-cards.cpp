class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n=size(nums);
       //front and back sliding window magic
        int sum=0;
        int ans=0;
        for(int i=n-k;i<n;i++){
            ans+=nums[i];
        }
         sum=ans;
        for(int i=0;i<k;i++){
            sum-=nums[n-k+i];
          sum+=nums[i];
            ans=max(ans,sum);
        }
        return ans;
    }
};