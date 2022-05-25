class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
     int n=size(words);
        int ans=0;
        for(auto x:words){
            bool ok=0;
            for(auto it:x){
                if(allowed.find(it) == string::npos){
                    ok=1;
                    // ans++;
                }
            }
            if(ok)ans++;
        }
        return n-ans;
    }
};