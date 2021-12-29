class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        int depth=0;
        int res=0;
        for(int i=0;i<n;i++)
        {
           if(s[i] == '(')
               depth++;
            else if(s[i] == ')')
                depth--;
            res=max(res,depth);
        }
        return res;
    }
};