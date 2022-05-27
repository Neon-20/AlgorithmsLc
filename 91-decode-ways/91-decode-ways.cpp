class Solution {
public:
    vector<int> dp;
    int solve(int idx,string &s){
        if(idx == size(s)) return 1;
          if(s[idx] == '0') return 0;
        if(idx == size(s)-1) return 1;
        if(dp[idx]!=-1) return dp[idx];
        //basically 2 ways 
        //either take 1 or 2 strings
        int way1=solve(idx+1,s);//1 string
        int way2=0;
        string sub=s.substr(idx,2);
        if(stoi(sub)<=26 and stoi(sub)>0){
            way2=solve(idx+2,s);
        }
        dp[idx]=way1+way2;
        return way1+way2;
    }
    int numDecodings(string s) {
        //number of ways to decode the string
        int n=size(s);
        dp.resize(n+1,-1);
        return solve(0,s);
    }
};