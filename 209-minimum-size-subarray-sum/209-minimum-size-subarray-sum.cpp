class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
      int left=0;
        int right=0;
        int sum=0;
        int len=INT_MAX;
        for(int i=0;i<n;i++){
            sum+=nums[right++];
            while(sum>=target){
                len=min(len,right-left);
                sum-=nums[left++];
            }
        }
        if(len==INT_MAX) return 0;
        else return len;
    }
};