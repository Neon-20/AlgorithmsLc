class Solution {
public:
    string defangIPaddr(string s) {
        int n=s.size();
        string a="[.]";
        for(int i=0;i<s.length();i++){
            if(s[i]=='.'){
                s.replace(i,1,a);
                i+=2;
            }
        }
        return s;
    }
};