class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        //Number of substrings containing all three characters
        //sliding window
        vector<int> cnt(3,0);
        int res=0;
        int i=0;
        for(int j=0;j<n;j++){
              ++cnt[s[j]-'a'];
            while(cnt[0]>0 and cnt[1]>0 and cnt[2]>0)
                --cnt[s[i++]-'a'];
            res+=i;
        }
        return res;
        
    }
};