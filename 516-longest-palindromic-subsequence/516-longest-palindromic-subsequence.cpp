class Solution {
public:
    int dp[1005][1005];
    int helper(string &s,int l,int r){
        if(l>r) return 0;
        if(l==r) return 1;
        if(dp[l][r]!=-1) return dp[l][r];
        int ans=0;
        if(s[l] == s[r]){
            ans=helper(s,l+1,r-1)+2;
        }
        else{
             ans=max(helper(s,l,r-1),helper(s,l+1,r));
        }
        dp[l][r]=ans;
        return ans;
    }
    int longestPalindromeSubseq(string s) {
        //longest pallindromic subsequence
        memset(dp,-1,sizeof(dp));
        int n=s.length();
        return helper(s,0,n-1);
    }
};





