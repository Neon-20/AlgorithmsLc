class Solution {
public:
    string getSmallestString(string s, int k) {
        //the inner loop breaks out when we check for each character
        string ans;
        for(char c:s){
            for(int i=0;i<26;i++){
                int d = abs(c-'a'-i);
                d = min(d,26-d);
                if(d<=k){
                    ans+=char('a'+i);
                    k-=d;
                    break;
                }
             }
        }
        return ans;
    }
};