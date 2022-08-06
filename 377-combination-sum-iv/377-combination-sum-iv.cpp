class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned long long >dp(target+1,0);
            dp[0]=1;   //base case
            
            //we have to iterate over the dp vector
            for(int i=1;i<=target;i++){
                //traverse in given nums array
                for(int j=0;j<nums.size();j++){
                    if(i-nums[j]>=0)
                        dp[i]+=dp[i-nums[j]];
                }
            }
            return dp[target];
    }
};