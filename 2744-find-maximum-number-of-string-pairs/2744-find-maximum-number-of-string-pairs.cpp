class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words){
        int n=words.size();
        set<string> s;
        int ans=0;
        for(auto x:words){//each word
            string st = x;
            reverse(begin(x),end(x));
            if(!s.count(x)){
                s.insert(st);
            }
            else ans++;
        }
        return ans;
    }
};