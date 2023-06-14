class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        int n=s.length();
        int cnt = 0;
        int mx=1;
        for(int i=0;i<n;i++){
            cnt=0;
            for(int j=i+1;j<n;j++){
                if(s[j-1] == s[j]){
                    cnt++;
                }
                if(cnt<=1){
                    mx=max(mx,j-i+1);
                }
            }
        }
        return mx;
        
    }
};