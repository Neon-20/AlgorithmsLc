class Solution {
public:
    int dp[1001][26][26];
    //start and end 
    int helper(vector<string> &v,int start,int end, int i){
        if(i>=v.size()){
            return 0;
        }
        if(dp[i][start][end]!=-1) return dp[i][start][end];
        int ans = 1e9;
        ans = min(ans,(int)v[i].size() - (end + 'a' == v[i][0]) + helper(v, start, v[i].back() - 'a', i + 1));
        ans = min(ans,(int)v[i].size() - (start+'a' == v[i].back()) + helper(v,v[i][0]-'a',end,i+1));
        return dp[i][start][end] = ans;
    }
    int minimizeConcatenatedLength(vector<string>& v) {
      memset(dp,-1,sizeof(dp));
      return v[0].size()+helper(v,v[0][0]-'a',v[0].back()-'a',1);
    }
};