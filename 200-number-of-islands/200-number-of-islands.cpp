class Solution {
public:
    void dfs(vector<vector<char>>& grid, int i, int j, vector<vector<int>>& dp){
       
        if(i<0 or i >=grid.size()) return;
        if(j<0 or j>=grid[0].size()) return;
        if (grid[i][j]=='0') return;
        if(dp[i][j]==1) return;
        
        dp[i][j] = 1;
        
        dfs(grid,i+1,j,dp);
        dfs(grid,i-1,j,dp);
        dfs(grid,i,j+1,dp);
        dfs(grid,i,j-1,dp);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        vector<vector<int>> dp(m,vector<int>(n,0));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]=='0') continue;
                else if(dp[i][j]==1) continue;
                else{
                    ans++;
                    dfs(grid,i,j,dp);
                }
            }
        }
        
        return ans;
    }
};