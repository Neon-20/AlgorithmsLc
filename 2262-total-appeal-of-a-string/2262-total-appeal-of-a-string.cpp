class Solution {
public:
    long long appealSum(string s) {
      //total contributions
        int prev[26]={};
        int n=s.length();
        long long ans=0;
        for(int i=0;i<s.length();i++){
            ans+=(i+1-prev[s[i]-'a'])*(n-i);
            prev[s[i]-'a']=1+i;
        }
        return ans;
        
        
    }
};