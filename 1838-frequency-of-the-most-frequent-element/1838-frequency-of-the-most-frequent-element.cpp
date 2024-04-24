class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
      int n = nums.size();
      //shrinkable window
        sort(begin(nums),end(nums));
        long sum = 0;
        long ans = 1;
        long i = 0;
        for(int j=0;j<n;j++){
            sum+=nums[j];
            while((j-i+1)*nums[j]-sum>k){
                sum-=nums[i];
                i++;
            }
            ans=max(j-i+1,ans);
        }
        return ans;
    }
};
