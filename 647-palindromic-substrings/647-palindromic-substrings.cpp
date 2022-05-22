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
        int begin,end;
        int ans=0;
        for(int i = 0; i < s.size(); i++) {
            begin = i, end = i;
            while(begin >= 0 && end<s.size() && s[begin--]==s[end++]) ans++;
            begin = i - 1, end = i;
            while(begin >= 0 && end<s.size() && s[begin--]==s[end++]) ans++;
        }
        
        return ans;
    }
};