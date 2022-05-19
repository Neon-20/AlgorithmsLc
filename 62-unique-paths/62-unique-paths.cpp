class Solution {
public:
    // const int mod=1e9+7;
    // void add(int &p,int x){
    //     p+=x;
    //     if(p>=mod) p-=mod;
    // }
    int recur(vector<vector<int>> &dp,int m,int n){
        if(n == 0 and m == 0) return 1;
        if(dp[m][n]!=-1) return dp[m][n];
        int ans=0;
        if(m>0) ans+=recur(dp,m-1,n);
        if(n>0) ans+=recur(dp,m,n-1);
        dp[m][n]=ans;
        return ans;
    }
    int uniquePaths(int m, int n) {
        // possible unique paths to be taken by robot would be 
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return recur(dp,m-1,n-1);
    }
};