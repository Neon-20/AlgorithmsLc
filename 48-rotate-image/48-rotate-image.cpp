class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        //rotate the image by 90's
        // So we can say that
        reverse(matrix.begin(),matrix.end());
            for(int i=0;i<matrix.size();i++)
            {
                for(int j=i+1;j<matrix[i].size();j++)
                {
                    swap(matrix[i][j],matrix[j][i]);
                }
               
            }
    }
};