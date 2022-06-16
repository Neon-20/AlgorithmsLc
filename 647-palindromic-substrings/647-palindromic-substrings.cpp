class Solution {
public: 
       int cnt=0;
 void get(string &s,int left,int right){
  while(left>=0 and right<s.length() and s[left] == s[right])
  {
       cnt++;
        left--;
        right++;
  }
     // return cnt;
    }
    int countSubstrings(string s) {
       //using two pointer normal
        // int cnt=0;
        for(int i=0;i<s.length();i++){
            get(s,i,i);
            get(s,i,i+1);
        }
        return cnt;
    }
};