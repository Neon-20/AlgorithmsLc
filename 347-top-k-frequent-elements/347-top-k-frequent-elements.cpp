class Solution {
public:
    using p=pair<int,int> ;
    vector<int> topKFrequent(vector<int>& nums, int k) {
     priority_queue<p,vector<p>,greater<p>> pq;
        map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }
        for(auto [x,y]:mp){
            pq.push({y,x});
        }
        while(pq.size()>k){
            pq.pop();
        }
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};