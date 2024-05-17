class Solution {
public:
    string largestOddNumber(string s) {
        int n = s.length();
        for(int i=n-1;i>=0;i--){
            int digit = s[i]-'0';
            if(digit%2){
                return s.substr(0,i+1);
            }
        }
        return "";
        
    }
};
// last digit agar odd hai then full number lelo