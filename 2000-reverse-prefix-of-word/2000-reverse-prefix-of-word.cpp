class Solution {
public:
    string reversePrefix(string s, char ch) {
        int n=s.size();
        auto p=s.find(ch);
        if(p!=string::npos)
            reverse(s.begin(),s.begin()+p+1);
        return s;
    }
};