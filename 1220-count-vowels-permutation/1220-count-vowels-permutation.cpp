
#define ll long long
class Solution {
public:
    int countVowelPermutation(int n) {
        const int mod=1e9+7;
        vector<vector<long long>> dp(5,vector<long long>(n+1));
        long ans=0;
        //wE KNOW THAT dp[k][i] ko states maano..
        // k is character ending with a..u.
        // i is possible length of string.
        for(int i=0;i<5;i++) 
        {
            dp[i][1]=1;
        }
        for(int i=2;i<=n;i++)
        {
            /*Each character is a lower case vowel ('a', 'e', 'i', 'o', 'u')
Each vowel 'a' may only be followed by an 'e'.
Each vowel 'e' may only be followed by an 'a' or an 'i'.
Each vowel 'i' may not be followed by another 'i'.
Each vowel 'o' may only be followed by an 'i' or a 'u'.
Each vowel 'u' may only be followed by an 'a'.*/
            dp[0][i]=dp[1][i-1];
            dp[1][i]=(dp[2][i-1]+dp[0][i-1])%mod;
            dp[2][i]=(dp[0][i-1]+dp[3][i-1]+dp[4][i-1]+dp[1][i-1])%mod;
            dp[3][i]=(dp[2][i-1]+dp[4][i-1])%mod;
            dp[4][i]=dp[0][i-1];
        }
       for(int i=0;i<5;i++)
       {
           ans=(ans+dp[i][n])%mod;
       }
        return ans;
    }
};