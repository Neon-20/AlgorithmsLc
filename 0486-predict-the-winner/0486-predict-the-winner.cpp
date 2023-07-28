class Solution {
public:
    
    int dp[21][21];
    int helper(int start,int end,vector<int> nums){
        if(dp[start][end]!=-1){
            return dp[start][end];
        }
        if(start == end){
            return nums[start];
        }
        int pickStart = nums[start]-helper(start+1,end,nums);
        int pickEnd = nums[end]-helper(start,end-1,nums);
        
        return dp[start][end] = max(pickStart,pickEnd);
    }
    bool PredictTheWinner(vector<int>& nums) {
       //all about start and end
        int start = 0;
        int end = nums.size()-1;
        memset(dp,-1,sizeof(dp));
    return helper(start,end,nums) >= 0;
    }
};

// player1 wins return true
// If score same return true
// if player 2 wins return false