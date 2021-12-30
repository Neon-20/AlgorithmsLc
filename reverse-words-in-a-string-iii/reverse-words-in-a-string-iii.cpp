class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
 /// This need two pointer approach ok yes..
          int j=0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == ' ')
            {
                reverse(s.begin()+j,s.begin()+i);
                    j=i+1;
            }
        }
        reverse(s.begin()+j,s.end());
        return s;
    }
};