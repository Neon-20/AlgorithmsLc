class Solution {
public:
    int ans=0;
    int dir[5]={0,1,0,-1,0};
    bool isvalid(vector<vector<int>> &grid,int x,int y){
        return x>=0 and y>=0 and x<size(grid) and y<size(grid[0])
              and grid[x][y]!=-1 and grid[x][y]!=3; 
    }
    void dfs(vector<vector<int>> &grid,int x,int y,int empty){
        if(!isvalid(grid,x,y)) return;
        if(grid[x][y]==2){
            if(empty==0) ans++;return;
        }
        grid[x][y]=3;
    for(int k=0;k<4;k++)
        dfs(grid,x+dir[k],y+dir[k+1],empty-1);
       grid[x][y]=0;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
      int start_x;
      int start_y;
        int empty=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j] == 1){
                    start_x=i;
                    start_y=j;
                }
                else if(grid[i][j]!=-1){
                    empty++;
                }
            }
        }
        dfs(grid,start_x,start_y,empty);
        return ans;
    }
};