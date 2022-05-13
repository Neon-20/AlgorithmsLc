class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
       int prev1=0;
        int prev2=0;
        for(int i=0;i<n;i++){
            int temp=prev1;
            prev1=max(prev2+nums[i],prev1);
            prev2=temp;
        }
        return prev1;
    }
};