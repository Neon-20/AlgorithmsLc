class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
  int ok=0;
        int ans=0;
        for(auto x:words){
            ok=0;
            for(int i=0;i<x.length();i++){
                if(allowed.find(x[i]) == string::npos)
                {
                   ok=1;
                }
            }
            if(ok) ans++;
        }
        return words.size()-ans;
    }
};