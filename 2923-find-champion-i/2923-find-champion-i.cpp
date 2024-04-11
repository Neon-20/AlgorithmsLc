class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n = grid.size();
        for(int i=0;i<n;i++){
            bool ok=true;
            for(int j=0;j<n;j++){
                if(i!=j and grid[i][j] == 0) ok=false;
            }
             if(ok) return i;
        }
        return -1;
    }
};
// grid[0][0] = 0 so i stronger
// grid[0][1] = 1
// grid[1][0] = 0
// grid[1][1] = 0