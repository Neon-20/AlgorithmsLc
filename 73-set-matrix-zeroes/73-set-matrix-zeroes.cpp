class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
     bool rz=false;//first cell
     bool cz=false;//first cell
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][0] == 0){
                cz=true;
                break;
            }
        }
        for(int i=0;i<matrix[0].size();i++){
            if(matrix[0][i] == 0){
                rz=true;
                break;
            }
        }
        // checking except first cell
        for(int i=1;i<matrix.size();i++){
            for(int j=1;j<size(matrix[0]);j++){
                if(matrix[i][j] == 0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        //process the matrix
        for(int i=1;i<matrix.size();i++){
            for(int j=1;j<size(matrix[0]);j++){
                if(matrix[i][0] == 0 or matrix[0][j] == 0){
                    matrix[i][j]=0;
                }
            }
        }
        //check for all at last
        if(rz){
            for(int i=0;i<matrix[0].size();i++){
                matrix[0][i]=0;
            }
        }
         if(cz){
            for(int i=0;i<matrix.size();i++){
                matrix[i][0]=0;
            }
        }
    }
};