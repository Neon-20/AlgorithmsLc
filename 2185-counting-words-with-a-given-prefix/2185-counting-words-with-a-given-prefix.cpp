class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
    int n=pref.size();
        int cnt=0;
        for(auto c:words)
        {
            cnt+=(c.substr(0,n) == pref);
        }
        return cnt;
    }
};