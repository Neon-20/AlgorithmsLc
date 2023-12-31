class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
      int n = nums.size();
        int cnt=0;
          for(int i=0;i<n;i++){
              if(nums[i]%2==0) cnt++;
          }
        return cnt>=2;
    }
};