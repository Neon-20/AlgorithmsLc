class Solution {
public:
    int countBinarySubstrings(string s) {
        int n=s.length();
        int cnt=1;
        int prefix=0;
        int ans=0;
        for(int i=1;i<s.length();i++){//i=2
            if(s[i] == s[i-1]){//consecutive
                cnt++;
            }
            else{
                ans+=min(prefix,cnt);
                prefix=cnt;
                cnt=1;
            }
        }
        ans+=min(cnt,prefix);
        return ans;
    }
};

   // 0 0 1 1 0 0 1 1->
// cnt=2;
// ans=2+2=4+2=6
// prefix=2

   




 
      