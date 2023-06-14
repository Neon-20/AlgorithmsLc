class Solution {
public:
    string smallestString(string s) {
    int i = 0, n = s.size();
        while (i < n && s[i] == 'a')
            i++;
        if (i == n)
            s[n - 1] = 'z';
        while (i < n && s[i] != 'a')
        {
            --s[i];i++;
        }
        return s;
    }
};