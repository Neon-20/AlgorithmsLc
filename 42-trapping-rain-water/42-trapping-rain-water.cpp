class Solution {
public:
    int trap(vector<int>& nums) {
     //Trapping rainwater;
        //Time-> O(n), Space-O(1) Approach->Two pointers
      int n=size(nums);
        vector<int> prefix(n);
        vector<int> suffix(n);
        //first find the max left value
        for(int i=1;i<n;i++){
            prefix[i]=max(prefix[i-1],nums[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            suffix[i]=max(suffix[i+1],nums[i+1]);
        }
        //calculated for the both left and right parts
        int ans=0;
        for(int i=0;i<n;i++){
         int level=min(prefix[i],suffix[i]);
        if(level>=nums[i]) ans+=level-nums[i];
        }
        return ans;
    }
};