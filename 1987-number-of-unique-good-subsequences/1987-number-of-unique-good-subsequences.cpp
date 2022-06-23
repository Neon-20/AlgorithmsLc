class Solution {
public:
const int mod=1e9+7;
    int numberOfUniqueGoodSubsequences(string s) {
       int ends1=0;
       int ends0=0;
       int has0=0;
        for(int i=0;i<s.length();i++){
            if(s[i] == '1'){
                ends1=(ends1+ends0+1)%mod;
            }
            else{
                ends0=(ends0+ends1)%mod;
                has0=1;
            }
        }
          return (ends1+ends0+has0)%mod;
    }
};