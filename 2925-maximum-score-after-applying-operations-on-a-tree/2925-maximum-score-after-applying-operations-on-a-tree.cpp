class Solution {
public:
    long long helper(int node,vector<int> &vis,vector<vector<int>> &adj,vector<int> &values){
        vis[node] = 1;
        //traversing the neighbours
        long long childSum = 0;
        for(auto &x:adj[node]){
            if(!vis[x]) childSum+=helper(x,vis,adj,values);
        }
        if(childSum == 0)
            return 1ll*values[node];
        return min(childSum,1ll*values[node]);
}
    long long maximumScoreAfterOperations(vector<vector<int>>& edges, vector<int>& values) {
        //total - min
        int n = values.size();
        vector<vector<int>> adj(n);
        for(auto &x:edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        long long sum = 0;
        for(int i=0;i<n;i++){
            sum+=values[i];
        }
       vector<int> vis(n,0);
       return sum - helper(0,vis,adj,values); 
    }
};