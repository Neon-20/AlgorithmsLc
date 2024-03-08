class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
       int n = grid.size();
       int m = grid[0].size();
       int sum;
        int cnt = 0;
        vector<vector<int>> ans(n+1,vector<int>(m+1,0));
       for(int i=1;i<=n;i++){
           sum = 0;
           for(int j=1;j<=m;j++){
               sum+=grid[i-1][j-1];
               ans[i][j] = ans[i-1][j] + sum;
               if(ans[i][j]<=k){
                   cnt++;
               }
           }
       }
        return cnt;
    }
};