class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int,char> mp;
        for(int i=0;i<size(indices);i++)
        mp.insert(make_pair(indices[i],s[i]));
        
        string ans="";
        for(auto x:mp){
            ans+=x.second;
        }
        return ans;
       
    }
};