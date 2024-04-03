class Solution {
public:
    int dp[501][501];
    int helper(vector<int>& cost, vector<int>& time,int i,int remaining){
        //choose smallest valid input BASE CASE
        if(remaining<=0) return 0;
        if(i>=cost.size()) return 1e9+7;
        
        if(dp[i][remaining]!=-1) return dp[i][remaining];
        int notTake = helper(cost,time,i+1,remaining);
        int take = cost[i]+helper(cost,time,i+1,remaining-time[i]-1);
        return dp[i][remaining] = min(take,notTake);
    }
    int paintWalls(vector<int>& cost, vector<int>& time) {
      //based out of 0/1 knapsack problem  
        int n = time.size();
        memset(dp,-1,sizeof(dp));
       return helper(cost,time,0,n);
    }
};