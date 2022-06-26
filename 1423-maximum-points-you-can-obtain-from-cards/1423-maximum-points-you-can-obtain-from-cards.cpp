class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n=size(nums);
       vector<int> prefix(n+1,0);
       vector<int> suffix(n+1,0);
        for(int i=0;i<n;i++){
            prefix[i+1]=prefix[i]+nums[i];
        }
        for(int i=n-1;i>=0;i--){
            suffix[i]=suffix[i+1]+nums[i];
        }
        int ans=INT_MIN;
        reverse(begin(suffix),end(suffix));
        for(int i=0;i<=k;i++){
            ans=max(ans,suffix[i]+prefix[k-i]);
        }
        return ans;
        
    }
};