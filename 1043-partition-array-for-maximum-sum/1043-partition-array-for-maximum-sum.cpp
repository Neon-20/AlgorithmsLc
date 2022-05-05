class Solution {
public:
    int recur(vector<int> &dp,vector<int> &arr,int start,int k){
        int n=arr.size();
        if(start>=n) return 0;
        if(dp[start]!=-1) return dp[start];
        int local=0;
        int global=0;
        for(int i=start;i<min(n,start+k);i++){
            local=max(local,arr[i]);
            global=max(global,local*(i-start+1)+recur(dp,arr,i+1,k));
        }
        dp[start]=global;
        return global;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
       int n=arr.size();
        // max sum after partitioning the array
        vector<int> dp(n+1,-1);
        return recur(dp,arr,0,k);
    }
};