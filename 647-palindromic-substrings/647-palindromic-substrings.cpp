class Solution {
public: 
    bool pallindrome(string s){
    for(int i=0;i<size(s);i++){
        if(s[i]!=s[size(s)-i-1]){
            return false;
        }
    }
    return true;
}
    int countSubstrings(string s) {
        int n=s.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            string ans="";
            for(int j=i;j<n;j++){
                ans+=s[j];
                if(pallindrome(ans))
                    cnt++;
            }
        }
        return cnt;
    }
};