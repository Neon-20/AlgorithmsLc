class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.size();
      vector<int> c1(26,-1);
      vector<int> c2(26,-1);
      for(int i=0;i<n;i++){
        char c = word[i];
        if(c>='a' and c<='z'){
          c1[c-'a']=i;
        }
        else{
          if(c2[c-'A']==-1)
          {
            c2[c-'A']=i;
          }
        }
      }
      int ans=0;
      for(int i=0;i<26;i++){
        if(c1[i]!=-1 and c2[i]!=-1 and c1[i]<c2[i]){
          ans++;
        }
      }
      return ans;
    }
};
// AbBCab
// legally only b we have 





