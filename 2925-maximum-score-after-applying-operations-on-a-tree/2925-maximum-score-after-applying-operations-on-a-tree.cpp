class Solution {
public:
    vector<vector<int>> adj;
    long long helper(int node,int parent,vector<int> &values){
        if(adj[node].size()==1 and node!=0) return values[node];
        long long sum = 0;
        for(auto &x:adj[node]){
            if(x==parent) continue;
            sum+=helper(x,node,values);
        }
       return min(sum,1ll*values[node]);
    }
    long long maximumScoreAfterOperations(vector<vector<int>>& edges, vector<int>& values) {
        //total - min = max
        int n =values.size();
        adj.resize(n);
        for(auto &x:edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }//stored in adjacency list undirected graph
        long long ans = 0;
        for(int i=0;i<n;i++){
            ans+=values[i];
        }
        return ans - helper(0,-1,values);
    }
};