class Solution {
public: 
    int dp[1005][1005];
    int found(string &s, int i,int j){
        if(i>=j) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]!=s[j]) return 0;
        int ans=0;
        ans=found(s,i+1,j-1);
         dp[i][j]=ans;
        return ans;
    }
    int countSubstrings(string s) {
       memset(dp,-1,sizeof(dp));
        int cnt=0;
       for(int i=0;i<size(s);i++){
           for(int j=i;j<size(s);j++){
               if(found(s,i,j)) cnt++;
           }
       }
        return cnt;
    }
};