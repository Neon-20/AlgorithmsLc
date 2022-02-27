class Solution {
public:
    int minSteps(string s, string t) {
        // min steps for anagrams
        vector<int> f(26);
        for(auto&x:s) f[x-'a']++;
        for(auto&x:t) f[x-'a']--;
        int ans=0;
        for(auto x:f)
            ans+=abs(x);
        return ans;
    }
};