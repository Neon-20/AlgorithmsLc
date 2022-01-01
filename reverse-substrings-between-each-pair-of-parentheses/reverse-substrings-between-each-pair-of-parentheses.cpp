class Solution {
public:
    string reverseParentheses(string s) {
        int n=s.length();
        vector<int> result;
        string ans;
          for(int i=0;i<n;i++){
              if(s[i] == '(')
              {
                  result.push_back(ans.length());
               }
              else if(s[i] == ')')
              {
                  int j=result.back();
                  result.pop_back();
                  reverse(ans.begin()+j,ans.end());
              }
              else 
              {
                  ans+=s[i];
              }
          }
        return ans;
    }
};