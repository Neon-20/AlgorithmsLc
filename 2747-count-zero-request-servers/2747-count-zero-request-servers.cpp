class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        int m = logs.size();
        vector<pair<int,int>> vp;
        for(auto it:logs) vp.push_back({it[1],it[0]});
        sort(begin(vp),end(vp));//sort on basis of time
        
        int q = queries.size();
        vector<int> ans(q,0);
        unordered_map<int,int> mp;
        vector<pair<int,int>> time(q);
        for(int i=0;i<q;i++){
            time.push_back({queries[i],i});
        }
        sort(time.begin(),time.end());
        //apply sliding window now
        int i=0;int j=0;
        for(auto tm:time){
            int currentTime = tm.first;
            int idx = tm.second;
            
            int start = currentTime - x;
            int end = currentTime;
            
            while(j<m and vp[j].first<=end){
                mp[vp[j].second]++;
                j++;
            }
            //isko bas ghatana hai isme se
            while(i<m and vp[i].first<start){
                if(mp[vp[i].second] == 1) mp.erase(vp[i].second);
                else mp[vp[i].second]--;
                i++;
            }
            ans[idx] = n - mp.size();
        }
        // sort(begin(ans),end(ans));
        return ans;
        
    }
};