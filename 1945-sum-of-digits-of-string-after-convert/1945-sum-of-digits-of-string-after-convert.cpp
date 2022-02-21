class Solution {
public:
    int getLucky(string s, int k) {
       string res="";
        for(int i=0;i<s.length();i++)
        {
            res+=to_string(s[i]-'a'+1);
        }
        int ans;
        while(k--)
        {
            ans=0;
            for(auto x:res)
            {
                ans+=(x-'0');
            }
            res=to_string(ans);
        }
        return ans;
    }
};