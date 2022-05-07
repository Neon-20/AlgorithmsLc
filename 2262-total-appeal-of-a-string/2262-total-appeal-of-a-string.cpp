class Solution {
public:
    long long appealSum(string s) {
      //total contributions
        //number of distinct strings in the substring
        int cnt[26]={0};
        long long ans=0;
        int n=s.length();
        for(int i=0;i<s.size();i++){
            ans+=(i+1-cnt[s[i]-'a'])*(n-i);
            cnt[s[i]-'a']=i+1;
        }
        return ans;
        
        
    }
};