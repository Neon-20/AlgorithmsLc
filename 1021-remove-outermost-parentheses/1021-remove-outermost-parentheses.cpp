class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.length();
        string ans = "";
        int opened = 0;
        for(auto x:s){
            if(x == '(' and opened++>0) ans+=x;
            if(x == ')' and opened-->1) ans+=x;
        }
        return ans;
    }
};