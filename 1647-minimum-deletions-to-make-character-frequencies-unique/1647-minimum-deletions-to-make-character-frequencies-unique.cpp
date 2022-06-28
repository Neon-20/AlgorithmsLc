class Solution {
public:
    int minDeletions(string s) {
        int n=s.length();
        //just easy implementation of set and map
        unordered_map<char,int> mp;
        set<int> st;
        for(int x:s) mp[x-'a']++;
        int ans=0;
        for(auto x:mp){
            while(st.count(x.second)){
                --x.second;
                ans++;
            }
            if(x.second) st.insert(x.second);
        }
        return ans;
    }
};