class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.length();
        // I can output any permuatation
        vector<int> ans;
        int low=0;
        int high=n;
      for(int i=0;i<=n;i++)
      {
          if(s[i] == 'I' or i == s.size())
              ans.push_back(low++);
          else 
              ans.push_back(high--);
      }
        return ans;
    }
};