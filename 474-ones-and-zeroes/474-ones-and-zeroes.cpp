class Solution {
public:
    int cache[605][105][105];
   int solve(vector<string> &str,int idx,int m,int n){
       if(idx == size(str)) return 0;
       if(cache[idx][m][n]!=-1) return cache[idx][m][n];
       int zero=count(begin(str[idx]),end(str[idx]),'0');
       int one=count(begin(str[idx]),end(str[idx]),'1');
       // int one=size(str[idx])-zero;
       int ans=0;
       if(zero<=m and one<=n){
           ans=max(ans,solve(str,idx+1,m-zero,n-one)+1);
       }
        ans=max(ans,solve(str,idx+1,m,n));
       cache[idx][m][n]=ans;
       return ans;
   }
    int findMaxForm(vector<string>& strs, int m, int n) {
        memset(cache,-1,sizeof(cache));
        return solve(strs,0,m,n);
    }
};