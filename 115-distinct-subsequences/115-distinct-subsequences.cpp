class Solution {
public:
    int dp[1005][1005];
    int helper(string &s,string &t,int i,int j){
        if(j == t.size()) return 1;
        if(i == s.size()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int ans=0;
        if(s[i] == t[j]){
            ans=helper(s,t,i+1,j+1)+helper(s,t,i+1,j);
        }
        else ans=helper(s,t,i+1,j);
        dp[i][j]=ans;
        return ans;
    }
    int numDistinct(string s, string t) {
        // distinct subsequences in s and t
        // common me distinct subsequence
        memset(dp,-1,sizeof(dp));
        return helper(s,t,0,0);
    }
};
   
