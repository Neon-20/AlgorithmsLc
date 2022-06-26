class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        //now we have as 
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==j or i+j == n-1){
                    if(grid[i][j]==0) return false;
                }
                else if(grid[i][j]>0) return false;
            }
        }
        return true;
    }
};