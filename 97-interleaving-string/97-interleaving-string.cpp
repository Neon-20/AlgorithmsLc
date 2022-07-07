class Solution {
public:
    int dp[1005][1005];
    int helper(string &s1,string &s2,string &s3,int i,int j, int k){
    if(i == size(s1) and j==size(s2) and k==size(s3))
        return true;
    if(k==size(s3)) return false;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s1[i]==s3[k] and helper(s1,s2,s3,i+1,j,k+1)){
        return dp[i][j]=true;
    }
    if(s2[j]==s3[k] and helper(s1,s2,s3,i,j+1,k+1)){
        return dp[i][j]=true;
    }
       return dp[i][j]=false;
    }
    bool isInterleave(string s1, string s2, string s3) {
        //just keep adding 
        memset(dp,-1,sizeof(dp));
        return helper(s1,s2,s3,0,0,0);
    }
};