class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        
        // Using xor we can do this as well
        // So basically we have to find out the validity of the problem..
       //we can check with unordereds sets easily
    for(int i=0;i<matrix.size();i++)
    {
        unordered_set<int> a,b;
        for(int j=0;j<matrix[i].size();j++)
        {
            a.insert(matrix[i][j]);
            b.insert(matrix[j][i]);
        }
        if(a.size()!=matrix.size() or b.size()!=matrix.size()) return false;
    }
        return true;
    }
};