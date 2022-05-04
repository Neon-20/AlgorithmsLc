class Solution {
public:
    long long countVowels(string s) {
        //in every substring of the word
        bool v[26]={1,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0};
        long long n=s.size(); 
        long long ans=0;
        for(int i=0;i<n;i++){
            ans+=v[s[i]-'a']*(i+1)*(n-i);
        }
        return ans;
    }
};