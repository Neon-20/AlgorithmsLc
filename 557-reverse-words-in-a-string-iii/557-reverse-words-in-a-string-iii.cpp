class Solution {
public:
    string reverseWords(string s) {
       int n=s.length();
        int j=0;
        for(int i=0;i<n;i++){
            if(s[i] == ' '){
                reverse(begin(s)+j,begin(s)+i);
                j=i+1;
            }
        }
        reverse(begin(s)+j,end(s));
        return s;
    }
};