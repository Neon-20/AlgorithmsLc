class Solution {
public:
 
    string longestPalindrome(string s) {
      int n=s.length();
        //If smaller interval is a pallindrome then
        // we can expand nicely
        vector<vector<int>> dp(n,vector<int>(n));
        int longest=INT_MIN;
        int end=-1;
        int start=-1;
        for(int i=n-1;i>=0;i--){
            for(int j=i;j<n;j++){
                if(s[i] == s[j]){
                    if(i == j){
                        dp[i][j]=1;
                    }
                    else if(j == i+1){
                        dp[i][j]=2;
                    }
      else if(i+1<n and j-1>=i and dp[i+1][j-1]>0){
          dp[i][j]=dp[i+1][j-1]+2;
      }
                }
                if(dp[i][j]>longest){
                    longest=dp[i][j];
                    start=i;
                    end=j;
                }
            }
        }
        
        return s.substr(start,end-start+1);
        
    }
};