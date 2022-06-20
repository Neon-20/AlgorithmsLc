bool compare( string& a, string& b){
        return a.length()>b.length();
    }
class Solution {
public:
    
  int minimumLengthEncoding(vector<string>& words) {
       int n=words.size();
        sort(begin(words),end(words),compare);
        string ans="";
        ans=ans+words[0]+'#';
        for(int i=1;i<words.size();i++){
     int pos=ans.find(words[i]+"#");
                if(pos!=-1) continue;
            else ans+=words[i]+"#";
        }
      return ans.size();
      
    }
};