class Solution {
public:

    int dp[205][205]{};
    int ans,m,n;
    int helper(vector<vector<int>> &matrix,int i,int j,int prev){
        if(i<0 or i>=m or j<0 or j>=n or matrix[i][j]<=prev) return 0;
        if(dp[i][j]) return dp[i][j];
        return dp[i][j]=
            1+max({helper(matrix,i+1,j,matrix[i][j]),
                  helper(matrix,i,j+1,matrix[i][j]),
                   helper(matrix,i-1,j,matrix[i][j]),
                   helper(matrix,i,j-1,matrix[i][j])});
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
      m=matrix.size();
      n=matrix[0].size();
        ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans=max(ans,helper(matrix,i,j,-1));//-1 for previous
            }
        }
        return ans;
    }
};