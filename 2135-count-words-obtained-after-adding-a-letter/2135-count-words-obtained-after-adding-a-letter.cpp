class Solution {
public:
    int get_mask(string &s)
    {
        int ans=0;int mask;
        for(auto &c :s)
        {
            mask=1<<(c-'a');
            ans+=mask;
        }
        return ans;
    }
    int wordCount(vector<string>& startWords, vector<string>& targetWords) {
        set<int> s;
     for(auto &c:startWords)
     {
         s.insert(get_mask(c));
     }
        int res=0;
        int x;
        for(auto &c:targetWords)
        {
            x=get_mask(c);
            bool ok=false;
            for(int i=0;i<26;i++)
            {
                if(x&(1<<i))
                {
                    if(s.find(x-(1<<i))!=s.end())
                        ok=true;
                }
            }
            if(ok) res++;
            
        }
        return res;
    }
};