class Solution {
public:
    string maxValue(string s, int x) {
        int n=s.size()-1;
        int ans=1+n;
        //maximum value of n after insertion would be something like this
        if(s[0] == '-')
        {
            for(int i=n;i>=1;i--)
            {
                if(s[i]-'0'>x)
                    ans=i;
            }
        }
        else
        {
            for(int i=n;i>=0;i--)
            {
                if(s[i]-'0'<x)
                    ans=i;
            }
        }
        s.insert(s.begin()+ans,x+'0');
        return s;
    }
};