class Solution {
public:
    long long appealSum(string s) {
       //Just traverse in each string and calculate 
        //the substring which has unique letter
        long long ans=0;
        int cnt[26]={};
        for(int i=0;i<s.length();i++){
            cnt[s[i]-'a']=i+1;
            for(int j=0;j<26;j++){
                ans+=cnt[j];
            }
        }
        return ans;
        
    }
};