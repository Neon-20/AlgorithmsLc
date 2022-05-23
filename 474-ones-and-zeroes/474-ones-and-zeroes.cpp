class Solution {
public:
    int cache[601][101][101];
    int solve(vector<string> &str,int idx,int m,int n){
        if(idx == size(str)) return 0;
        if(cache[idx][m][n]!=-1) return cache[idx][m][n];
        int zero=0,one=0;
        for(auto x:str[idx]){
            if(x == '0') zero++;
            if(x == '1') one++;
        }
        int result=0;
        // int ans=0;
        if(zero<=m and one<=n){
            result=max(result,solve(str,idx+1,m-zero,n-one)+1);
        }
    result=max(result,solve(str,idx+1,m,n));
        cache[idx][m][n]=result;
        return result;  
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        memset(cache,-1,sizeof(cache));
        return solve(strs,0,m,n);
    }
};