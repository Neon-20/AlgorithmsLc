class Solution {
public:
   
    bool isSubstringPresent(string s) {
        for(int i=0;i<s.size();i++){
            for(int j=0;j<s.size();j++){
                if(s[i]==s[j+1] and s[i+1] == s[j]){
                    return true;
                }
            }
        }
        return false;
    }
};