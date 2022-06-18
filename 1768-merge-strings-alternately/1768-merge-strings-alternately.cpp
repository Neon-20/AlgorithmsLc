class Solution {
public:
    string mergeAlternately(string s, string t) {
        int n=s.size();
        int m=t.size();
        int i=0;
        int j=0;
            string ans="";
        while(i<n and j<m){
            ans+=s[i++];// a
            ans+=t[j++];//ap
        }
        while(i<n){
            ans+=s[i++];
        }
        while(j<m){
            ans+=t[j++];
        }
        return ans;
    }
};