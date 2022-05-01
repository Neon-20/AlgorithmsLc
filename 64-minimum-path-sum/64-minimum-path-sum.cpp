class Solution {
public:
    int recur(vector<vector<int>> &grid,int row,int col,vector<vector<int>> &memo){
        if(row<0 or col<0) return INT_MAX;
        if(row == 0 and col == 0) return grid[row][col];
        if(memo[row][col]!=-1) return memo[row][col];
        int res= grid[row][col]+min(recur(grid,row-1,col,memo),recur(grid,row,col-1,memo));
        memo[row][col]=res;
        return res;
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> memo(n,vector<int>(m,-1));
        return recur(grid,n-1,m-1,memo);// 0 based indexing
    }
};