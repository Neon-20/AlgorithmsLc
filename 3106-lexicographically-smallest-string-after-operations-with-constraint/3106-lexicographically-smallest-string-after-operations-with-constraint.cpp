class Solution {
public:
    string getSmallestString(string s, int k) {
        string ans;
        for(char c:s){
            for(int i=0;i<26;i++){
                int diff = abs(c-'a'-i);
                diff = min(diff,26-diff);
                if(diff<=k){
                    ans+=char('a'+i);
                    k-=diff;
                    break;
                }
            }
        }
        return ans;
    }
};