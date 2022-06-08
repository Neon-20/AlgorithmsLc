class Solution {
public:
    int dp[1002][1002];
int helper(string &s,string &t,int n,int m){
    if(n == 0 or m == 0) return 0;
    if(dp[n][m]!=-1) return dp[n][m];
    int ans=0;
    if(s[n-1] == t[m-1]) 
        ans=1+helper(s,t,n-1,m-1);//going diagonally
    else 
  ans=max(helper(s,t,n-1,m),helper(s,t,n,m-1));
    dp[n][m]=ans;
    return ans;
}
    int longestCommonSubsequence(string s, string t) {
      memset(dp,-1,sizeof(dp));
    return helper(s,t,s.length(),t.length());
    }
};