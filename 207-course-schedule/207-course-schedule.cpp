class Solution {
public:
   bool check(vector<int> graph[],vector<int> &vis,int i)
   {
       if(vis[i] == 1) return true;
       if(vis[i] == 0){
           vis[i]=1;
           for(auto edge:graph[i]){
               if(check(graph,vis,edge))
                   return true;
           }
       }
       vis[i]=2;
       return false;
   }
    bool canFinish(int n, vector<vector<int>>& graph) {
        vector<int> adj[n];
        for(auto edge:graph){
            adj[edge[1]].push_back(edge[0]);
        }
        vector<int> visited(n,0);
        for(int i=0;i<n;i++){
            if(check(adj,visited,i))
                return false;
        }
        return true;
    }
};