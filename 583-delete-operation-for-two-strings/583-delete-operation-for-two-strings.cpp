class Solution {
public:
    // int dp[505][505];
    vector<vector<int>> dp;
    int helper(int i,int j,string &s,string &t){
     if(i >= size(s) or j>=size(t)) return 0;//base case
     if(dp[i][j]!=-1) return dp[i][j];
     int ans=0;
     if(s[i] == t[j]){
        ans=1+helper(i+1,j+1,s,t);
     }   
        else{
ans=max(helper(i,j+1,s,t),helper(i+1,j,s,t));
        }
     dp[i][j]=ans;//memoization
     return ans;
     
 }
    int minDistance(string a, string b) {
       int x=a.size();
       int y=b.size();
        dp.resize(x+1,vector<int>(y+1,-1));
        return (x+y) - 2*helper(0,0,a,b);
    }
    
};