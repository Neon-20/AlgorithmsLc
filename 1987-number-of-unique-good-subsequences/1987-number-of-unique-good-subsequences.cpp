class Solution {
public:
const int mod=1e9+7;
    int numberOfUniqueGoodSubsequences(string s) {
        int dp[2][2]={};
        for(char c:s){
            int a=c-'0';
            if(a == 0){
                dp[0][0]=1;
                dp[1][0]=(dp[1][0]+dp[1][1])%mod;
            }
            else{
                dp[1][1]=(dp[1][0]+dp[1][1]+1)%mod;
            }
        }
        return (dp[0][0]+dp[1][0]+dp[0][1]+dp[1][1])%mod;
    }
};