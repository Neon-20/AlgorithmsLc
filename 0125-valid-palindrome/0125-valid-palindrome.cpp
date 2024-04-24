class Solution {
public:
    bool isPalindrome(string s) {
       //string pall or not
    int n = s.length();
        //remove spaces and special characters
 s.erase(remove_if(s.begin(), s.end(), ::isspace), s.end());
  s.erase(remove_if(s.begin(), s.end(), [](char c) {
        return !isalnum(c);
    }), s.end());
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        string t = s;
        reverse(begin(t),end(t));
        cout<<t<<" ";
        if(s==t){
            return true;
        }
        else return false;
}
};