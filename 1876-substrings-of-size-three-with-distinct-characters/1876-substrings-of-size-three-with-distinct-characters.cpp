class Solution {
public:
    int countGoodSubstrings(string s) {
        char a = s[0];
        char b = s[1];
        char c = s[2];
        int ans=0;
        if(s.size()<3) return 0;
        for(int i=3;i<=s.size()-1;i++){
            if(a!=b and b!=c and c!=a) ans++;
            a=b;
            b=c;
            c=s[i];
        }
        if(a!=b and b!=c and c!=a) ans++;
        return ans;
    }
};