class Solution {
public:
    bool isAnagram(string s, string t) {
        //valid anagrams
        unordered_map<char,int> mp;
        if(s.length()!=t.length()) return false;
        for(int i=0;i<size(s);i++){
            mp[s[i]]++;
            mp[t[i]]--;
        }
        for(auto x:mp){
            if(x.second) return false;
        }
        return true;
    }
};