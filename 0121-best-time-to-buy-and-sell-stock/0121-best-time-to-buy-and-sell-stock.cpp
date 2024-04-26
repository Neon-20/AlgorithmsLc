class Solution {
public:
    int maxProfit(vector<int>& nums) {
      int n = nums.size();
      //abhi kharido baad me becho
      int maxProfit = 0;
      int minBuy = INT_MAX;
      for(int i=0;i<n;i++){
        minBuy = min(minBuy,nums[i]);
        maxProfit = max(nums[i]-minBuy,maxProfit);
      }
      return maxProfit;
    }
};