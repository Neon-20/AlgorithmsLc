class Solution {
    public:
    bool isP(string &s)
    {
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            if(s[i]!=s[j]) return false;
            i++;j--;
        }
        return true;
    }
    int ans=0;
    void helper(string &s,int index,string &a,string &b)
    {
        if(s.size() == index)
        {
            if(isP(a) and isP(b))
                ans=max(ans,(int)(a.size()*b.size()));
            return;
        }
    a.push_back(s[index]);
    helper(s,index+1,a,b);
    a.pop_back();
    b.push_back(s[index]);
    helper(s,index+1,a,b);
    b.pop_back();
    helper(s,index+1,a,b);
}
    int maxProduct(string s)
    {
        string a="";
        string b="";
        helper(s,0,a,b);
        return ans;
    }
};