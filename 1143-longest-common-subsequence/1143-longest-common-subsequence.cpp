class Solution {
public:
    // ......_......
 int helper(int i,int j,string &s,string &t,vector<vector<int>>&dp){
     if(i >= size(s) or j>=size(t)) return 0;//base case
     if(dp[i][j]!=-1) return dp[i][j];
     int ans=0;
     if(s[i] == t[j]){
        ans=1+helper(i+1,j+1,s,t,dp);
     }   
        else{
ans=max(helper(i,j+1,s,t,dp),helper(i+1,j,s,t,dp));
        }
     dp[i][j]=ans;
     return ans;
     
 }
    int longestCommonSubsequence(string s, string t) {
    vector<vector<int>> dp(size(s)+1,vector<int>(size(t)+1,-1));
        return helper(0,0,s,t,dp);
    }   
};