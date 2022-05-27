class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
     int n=size(words);
        int ans=0;
        for(auto x:words){
            bool flag=false;
            for(auto it:x){
                if(allowed.find(it) == string::npos){
                    flag =true;
                }
            }
            if(flag)ans++;
        }
        return n-ans;
    }
};