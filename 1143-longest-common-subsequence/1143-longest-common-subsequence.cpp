class Solution {
public:
 
    int longestCommonSubsequence(string s, string t) {
    vector<vector<int>> dp(size(s)+1,vector<int>(size(t)+1,0));
     
        for(int i=1;i<=size(s);i++){
            for(int j=1;j<=size(t);j++){
        if(s[i-1] == t[j-1]){
            dp[i][j]=1+dp[i-1][j-1];
        }
          else{
            dp[i][j]=max(dp[i][j-1],dp[i-1][j]);   
          }
            }
        }
        return dp[size(s)][size(t)];
    }   
};