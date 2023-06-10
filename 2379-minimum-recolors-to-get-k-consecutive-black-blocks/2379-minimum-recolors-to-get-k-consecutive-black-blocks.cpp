class Solution {
public:
    int minimumRecolors(string s, int k) {
        int count=0;
        int ans=0;
        for(int i=0;i<k;i++)
        {
            count+=(s[i]=='W');
        }
        ans=count;
        for(int i=k;i<s.size();i++)
        {
            count-=(s[i-k]=='W');
            count+=(s[i]=='W');
            ans=min(ans,count);
        }
        return ans;
    }
};