class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.size();
        vector<int> c1(26,0);
        vector<int> c2(26,0);
       for(char c:word){
          if(c>='a' and c<='z') c1[c-'a']++;
          else c2[c-'A']++;
       }
      int ans = 0;
      for(int i=0;i<26;i++){
        if(c1[i] and c2[i]){
          ans++;
          }
      }
      return ans;
    }
};