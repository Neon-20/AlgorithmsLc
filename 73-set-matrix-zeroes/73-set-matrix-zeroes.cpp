class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      bool rz=false;
        bool cz=false;
        for(int i=0;i<size(matrix);i++){
            if(matrix[i][0]==0){
                cz=true;
                break;
            }
        }
        for(int i=0;i<size(matrix[0]);i++){
            if(matrix[0][i]==0){
                rz=true;
                break;
            }
        }
        for(int i=1;i<size(matrix);i++){
            for(int j=1;j<size(matrix[0]);j++){
                if(matrix[i][j] == 0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
         for(int i=1;i<size(matrix);i++){
            for(int j=1;j<size(matrix[0]);j++){
                if(matrix[i][0] == 0 or matrix[0][j] == 0){
                   matrix[i][j]=0;
                }
            }
        }
        if(rz){
            for(int i=0;i<size(matrix[0]);i++){
                matrix[0][i]=0;
            }
        }
        if(cz){
            for(int i=0;i<size(matrix);i++){
                matrix[i][0]=0;
            }
        }
    }
};