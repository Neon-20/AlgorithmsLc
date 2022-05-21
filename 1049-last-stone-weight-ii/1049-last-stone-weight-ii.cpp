class Solution {
public:
     int dp[35][5050];
        int solve(vector<int> &stones,int idx,int cal,int sum,int n){
            if(idx>=n){
                return abs(sum-cal);
            }
            if(dp[idx][sum]!=-1) return dp[idx][sum];
int ans=min(solve(stones,idx+1,cal,sum,n),
            solve(stones,idx+1,cal+stones[idx],sum-stones[idx],n));
        dp[idx][sum]=ans;
            return ans;
    }
    int lastStoneWeightII(vector<int>& stones) {
        //Knapsack DP problem
        int n=size(stones);
       memset(dp,-1,sizeof(dp));
            int sum=0;
       for(int x:stones){
           sum+=x;
       }
            return solve(stones,0,0,sum,n);
    }
};