class Solution {
public:
    int dp[1005][1005];
 int helper(int i,int j,string &s,string &t){
     if(i >= size(s) or j>=size(t)) return 0;//base case
     if(dp[i][j]!=-1) return dp[i][j];
     int ans=0;
     if(s[i] == t[j]){
        ans=1+helper(i+1,j+1,s,t);
     }   
        else{
ans=max(helper(i,j+1,s,t),helper(i+1,j,s,t));
        }
     dp[i][j]=ans;//memoization
     return ans;
     
 }
    int longestCommonSubsequence(string s, string t) {
    memset(dp,-1,sizeof(dp));
        return helper(0,0,s,t);
    }   
};