class Solution {
public:
    string largestOddNumber(string s) {
        string ans = "";
        for(int i=s.length()-1;i>=0;i--){
            int digit = s[i]-'0';
//          if it is odd then we have as
            if(digit%2){
                return s.substr(0,i+1);
            }
        }
        return ans;
    }
};