class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      map<string,vector<string>> mp;
        for(string s:strs){
            string t=s;
            sort(begin(t),end(t));
            mp[t].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto x:mp){
            ans.push_back(x.second);
        }
     return ans;
    }
};