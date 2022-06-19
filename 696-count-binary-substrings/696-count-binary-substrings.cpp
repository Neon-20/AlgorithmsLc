class Solution {
public:
    int countBinarySubstrings(string s) {
        int n=s.length();
        int cnt=1;
        int prefix=0;
        int sum=0;
        for(int i=1;i<s.length();i++){
            if(s[i] == s[i-1]){
                cnt++;
            }
            else{
                sum+=min(prefix,cnt);
                prefix=cnt;
                cnt=1;
            }
        }
        sum+=min(cnt,prefix);
        return sum;
    }
};

   // 0 0 1 1 0 0 1 1
    // s[i] == s[i-1]


 
      