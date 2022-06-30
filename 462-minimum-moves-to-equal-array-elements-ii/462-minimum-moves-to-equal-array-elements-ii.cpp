class Solution {
public:
    int minMoves2(vector<int>& nums) {
       int n=nums.size();
        // +1/-1
        // sum will remain same
          int ans=0;
          sort(begin(nums),end(nums));
          int avg=nums.size()/2;
          for(int i=0;i<n;i++){
              ans+=abs(nums[i]-nums[avg]);
          }
        return ans;    
    }
};