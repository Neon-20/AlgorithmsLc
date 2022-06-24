class Solution {
public:
    vector<bool> checkIfPrerequisite(int n,
vector<vector<int>>& nums, vector<vector<int>>& queries) {
        vector<int> graph[n];
        vector<bitset<101>> b(n);
        vector<int> indegree(n);
        for(auto edge:nums){
            graph[edge[0]].push_back(edge[1]);
            indegree[edge[1]]++;
        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i] == 0) q.push(i);
            b[i].set(i,1);
        }
        while(!q.empty()){
            auto x=q.front();q.pop();
            for(auto &edge:graph[x]){
                b[edge]|=b[x];
                if(--indegree[edge] == 0) q.push(edge);
            }
        }
        vector<bool> ans;
        for(auto &x:queries){
            ans.push_back(b[x[1]].test(x[0]));
        }
      return ans;
    }
};