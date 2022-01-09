class Solution {
public:
    int wordCount(vector<string>& s, vector<string>& t) {
       unordered_set<string> a;
         for(auto &x:s)
         {
             sort(begin(x),end(x));
             a.insert(x);
         }
        int res=0;
        for(auto &x:t)
        {
            sort(begin(x),end(x));
            for(int i=0;i<x.size();i++)
            {
                if(a.count(x.substr(0,i)+x.substr(i+1)))
                   { 
                    ++res;break;
                   }
            }
        }
        return res;
        
    }
};