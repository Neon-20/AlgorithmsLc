class Solution {
public:
    int removePalindromeSub(string s) {
        //min. steps to make the given string empty
        int n=size(s);
        if(s== "") return 0;
        for(int i=0,j=n-1;i<j;i++,j--)
            if(s[i]!=s[j]) return 2;
             return 1;
    }
};