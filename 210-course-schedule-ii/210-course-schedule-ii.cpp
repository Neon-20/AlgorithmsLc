class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& nums) {
      //so now we have as;
        vector<int> graph[n];
        vector<int> indegree(n);
        for(auto edge:nums){
            graph[edge[1]].push_back(edge[0]);
            indegree[edge[0]]++;
        }
        queue<int> q;
        for(int i=0;i<n;i++)
            if(indegree[i] == 0) q.push(i);
        //pushed in queue with indegree q
        vector<int> ans;
        while(!q.empty()){
            auto x=q.front();q.pop();
            ans.push_back(x);
            for(auto val:graph[x]){
                if(--indegree[val] == 0){
                    q.push(val);
                }
            }
        }
        if(size(ans) == n) return ans;
        return {};
    }
};







