class Solution {
public:
    int dp[1005][1005];
int helper(int i,int j,string &s,string &t){
    if(i>=s.size() or j>=t.size()) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans=0;
    if(s[i] == t[j]){
     ans=s[i]+helper(i+1,j+1,s,t); //value add krk bas hatao
    }
    else{
      ans=max(helper(i,j+1,s,t),helper(i+1,j,s,t));  
    }
    dp[i][j]=ans;
    return ans;
}
    int minimumDeleteSum(string s, string t) {
         //ok just add ascii values thats it 
       int m=s.size();
       int n=t.size();
       //how to identify the exact character
       int ans=0;
       for(auto x:s){
        ans+=x;
       }
       for(auto x:t){
        ans+=x;
       }
       //got in answer all sum of ascii values
       //after summing up the value we have got 
       memset(dp,-1,sizeof(dp));
       ans=ans-2*helper(0,0,s,t);
    //    ans=ans-get;
       return ans;
    }
};