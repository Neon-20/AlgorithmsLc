class Solution {
public:
    int trap(vector<int>& nums) {
      int n=size(nums);
       vector<int> prefix(n);
        vector<int> suffix(n);
        for(int i=1;i<n;i++){
            prefix[i]=max(nums[i-1],prefix[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            suffix[i]=max(suffix[i+1],nums[i+1]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int level=min(prefix[i],suffix[i]);
            if(level>=nums[i]) ans+=level-nums[i];
        }
        return ans;
    }
};