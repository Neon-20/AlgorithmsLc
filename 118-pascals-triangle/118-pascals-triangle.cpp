class Solution {
public:
    vector<vector<int>> generate(int N) {
     vector<vector<int>> v(N);
        for(int i=0;i<N;i++)
        {
            v[i].resize(i+1,0);
            v[i][0]=v[i][i]=1;
        }
        for(int i=0;i<N;i++)
        {
            for(int j=1;j<i;j++)
            {
                v[i][j]=v[i-1][j-1]+v[i-1][j];
            }
        }
        return v;
    }
};