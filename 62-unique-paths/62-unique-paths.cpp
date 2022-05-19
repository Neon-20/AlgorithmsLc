class Solution {
public:
  
  
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        m--;n--;
        dp[0][0]=1;
        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++){
                if(i-1>=0) dp[i][j]+=dp[i-1][j];
                if(j-1>=0) dp[i][j]+=dp[i][j-1];
            }
        }
        return dp[m][n];
    }
};