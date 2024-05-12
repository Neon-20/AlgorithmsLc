class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        //max consecutive ones
        int n = nums.size();
        int cnt = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
           if(nums[i]==1){
               cnt++;
           }
            if(nums[i]==0){
                cnt=0;
            }
            ans = max(cnt,ans);
        }
        return ans;
    }
};