class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
       reverse(begin(s),end(s));
    }
};