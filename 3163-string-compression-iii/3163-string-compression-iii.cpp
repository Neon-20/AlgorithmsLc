class Solution {
public:
    string compressedString(string word) {
        int n = word.length();
        int j = 0;
        int i = 0;
        string ans = "";
        while(j<n){
            int cnt = 0;
            while(j<n and word[i]==word[j] and cnt<9){
                j++;
                cnt++;
            }
            ans+=to_string(cnt)+word[i];
            i=j;
        }
        return ans;
    }
};