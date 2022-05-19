class Solution {
public:
    void dfs(vector<vector<int>> &grid,int x,int y,int val,int newColor){
        if(x<0 or x>=grid.size() or y<0 or y>=grid[0].size() or grid[x][y]!=val){
            return;
        }
        grid[x][y]=newColor;
        dfs(grid,x+1,y,val,newColor);
        dfs(grid,x,y+1,val,newColor);
        dfs(grid,x-1,y,val,newColor);
        dfs(grid,x,y-1,val,newColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc]==newColor) return image;
        dfs(image,sr,sc,image[sr][sc],newColor);
        return image;
    }
};