class Solution {
public:
    bool isPalindrome(int x) {
        //check for pallindrome
        string str = to_string(x);
        int n = str.length();
        for(int i=0;i<str.length();i++){
            if(str[i]!=str[n-i-1]){
                return false;
            }
        }
        return true;
    }
};