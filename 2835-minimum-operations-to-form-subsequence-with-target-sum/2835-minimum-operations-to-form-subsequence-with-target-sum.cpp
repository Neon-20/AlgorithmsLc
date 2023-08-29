class Solution {
public:
    #define ll long long
    int minOperations(vector<int>& nums, int target) {
      ll sum = accumulate(nums.begin(),nums.end(),0ll);
      if(sum<target) return -1;
        ll operation=0;
        ll n=nums.size();
        sort(begin(nums),end(nums));
      for(int i=n-1;i>=0;i--){
          sum-=nums[i];
          while(sum<target){
              while(nums[i]>target){
                  nums[i]/=2;
                  operation++;
              }
              target-=nums[i];
          }
      }
        return operation;
    }
};

///tasks ahead-> select the numbers in the list
//it shd be greater than 1 and it shd be even number