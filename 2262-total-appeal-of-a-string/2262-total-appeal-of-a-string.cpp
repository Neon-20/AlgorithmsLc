class Solution {
public:
    long long appealSum(string s) {
      //total contributions
        int n=s.length();
       vector<int> cnt(26,0);
        long long ans=0;
        for(int i=0;i<n;i++){
            ans+=(i+1-cnt[s[i]-'a'])*(n-i);
            cnt[s[i]-'a']=1+i;
        }
        return ans;
        
    }
};