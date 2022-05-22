class Solution {
public:
    int dp[35][5050];//denoting i and sum dp[i][sum]
    //just minimise the subarray sum difference
    //like s/2 and s/2 
    int solve(vector<int> &stones,int idx,int add,int sum,int n){
        if(idx>=n) return abs(sum-add);
        if(dp[idx][sum]!=-1) return dp[idx][sum];
        int ans=0;
        ans=min(solve(stones,idx+1,add,sum,n),
               solve(stones,idx+1,add+stones[idx],sum-stones[idx],n));
        dp[idx][sum]=ans;
        return ans;
    }
    int lastStoneWeightII(vector<int>& stones) {
       //We have 2 choices
        //1. Either to take the stone equal in worth
        //2. Or to take the stone not equal ok 
        int n=size(stones);
        memset(dp,-1,sizeof(dp));
        int sum=0;
        for(int x:stones) sum+=x;
        return solve(stones,0,0,sum,n);
    }
};