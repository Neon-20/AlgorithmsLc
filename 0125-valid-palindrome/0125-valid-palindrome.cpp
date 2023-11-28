class Solution {
public:
    bool isPalindrome(string s) {
      //remove all the shit and then solve it
        int n = s.length();
        int l = 0;
        int r = n-1;
        while(l<r){
            while(l<r and !isalnum(s[l])){
                l++;
            }
            while(l<r and !isalnum(s[r])){
                r--;
            }
            if(tolower(s[l++])!=tolower(s[r--])){
                return false;
            }
        }
        return true;
    }
};