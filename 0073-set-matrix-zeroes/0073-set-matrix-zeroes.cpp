class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();// row
        int m = matrix[0].size();//column
        vector<int> row(n,0);
        vector<int> col(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    row[i]=1; //marked
                    col[j]=1; //marked
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row[i] or col[j]){
                   matrix[i][j]=0;
                }
            }
        }
        
    }
};


// strategy is to mark and attack 
// mark with row and col arrays and attack after that