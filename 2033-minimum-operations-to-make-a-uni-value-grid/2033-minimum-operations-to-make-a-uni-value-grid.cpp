class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        //compress this in 1D array
        vector<int> ans;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                ans.push_back(grid[i][j]);
            }
        }
        sort(begin(ans),end(ans));//sort and make equal to the mid element
        int res=0;
        int n=size(grid);
        int m=size(grid[0]);
        int target=ans[m*n/2];
        for(int i=0;i<m*n;i++){
            if(abs(ans[i]-target)%x!=0) return -1;
            else  res+=abs(ans[i]-target)/x;
        }
        return res;
    }
};