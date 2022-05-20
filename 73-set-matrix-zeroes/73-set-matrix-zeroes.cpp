class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=size(matrix);
        int m=size(matrix[0]);
        //Now make different the first cell of matrix
        bool row_is_zero=false;
        bool col_is_zero=false;
        // check the first column
        for(int i=0;i<n;i++){
            if(matrix[i][0] == 0){
                col_is_zero=true;
                break;
            }
        }
        // check the first row
         for(int i=0;i<m;i++){
            if(matrix[0][i] == 0){
                row_is_zero=true;
                break;
            }
        }
       // check all except first row and column
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        //Process the row and columns
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][0]==0 or matrix[0][j] == 0){
                   matrix[i][j]=0;
                }
            }
        }
        //Now check for the row is zero or not
        if(row_is_zero){
            for(int i=0;i<m;i++){
                matrix[0][i]=0;
            }
        }
         if(col_is_zero){
            for(int i=0;i<n;i++){
                matrix[i][0]=0;
            }
        }
    }
};