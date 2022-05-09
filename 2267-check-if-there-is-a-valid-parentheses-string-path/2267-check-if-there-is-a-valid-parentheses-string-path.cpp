class Solution {
public:
    int visited[100][100][101]={};
    bool hasValidPath(vector<vector<char>>& grid,int i=0,int j=0,int
                      balance=0) {
        //Just check whether there is a valid path  or not
        int m=grid.size();
        int n=grid[0].size();
        balance+=grid[i][j]=='('?1:-1;
        if(balance<0 or balance>(m+n)/2 or visited[i][j][balance])
            return false;
        visited[i][j][balance]=true;
        if(i == m-1 and j==n-1 and balance==0) return true;
        if(i<m-1 and hasValidPath(grid,i+1,j,balance))
            return true;
         if(j<n-1 and hasValidPath(grid,i,j+1,balance))
             return true;
        return false;
    }
};