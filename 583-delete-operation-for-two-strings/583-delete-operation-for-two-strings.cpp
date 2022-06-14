class Solution {
public:
    int longest_sub(string &a,string &b){
           int m=a.size();
        int n=b.size();
        //longest common subsequence
    vector<vector<int>> dp(m+1,vector<int>(n+1,0));
    // For longest common subs
    // dp[0][0]=1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(a[i-1] == b[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
         dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }  
    return dp[m][n];  
    }
    int minDistance(string a, string b) {
       int x=a.size();
       int y=b.size();
        return x+y - 2*longest_sub(a,b);
    }
    
};