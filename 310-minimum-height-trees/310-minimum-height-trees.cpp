#define ll              long long 
#define tcT             template<class T
#define each(a,x)       for (auto& a: x)
#define sz(x)          (int)(x.size())
#define ff               first
#define present(ab,cd)   ((ab).find((cd)) != (ab).end()
#define endl             "\n"
#define pii              pair<int,int> 
#define lld              long double
#define eb               emplace_back
#define ss               second
#define all(a)            a.begin(),a.end()
#define loop(i,a,n)      for(int i=a;i<n;i++)
#define rloop(i,a,n)     for(int i=a;i<=n;i++)
#define loopl(i,a,b)     for(int i=(int)a;i<(int)b;i++)
#define loopr(i,a,b)     for(int i=(int)a-1;i>=(int)b;i--)
#define INF              (1LL<<61)-1
#define pb               push_back
#define bpc(a)           __builtin_popcountll(a)
class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& nums) {
      //create a graph first then we have as
        //topsort tech
//JUST EAT UP ALL THE LEAVES UNTIL ONLY 1/2 ARE LEFT
        
        vector<int> graph[n];
        vector<int> indegree(n);
        for(auto edge:nums){
            graph[edge[1]].pb(edge[0]);
            graph[edge[0]].pb(edge[1]);//undirected
            indegree[edge[0]]++;
            indegree[edge[1]]++;
        }
        queue<int> q;
        loop(i,0,n){
            if(indegree[i] == 1) {
                q.push(i);//store leaf nodes
                indegree[i]--;
            }
        }
        vector<int> ans;
        if(n == 1)  ans.pb(0);
        else
        while(!q.empty()){
            int len=q.size();
            ans.clear();
            for(int i=0;i<len;i++){
                auto x=q.front();q.pop();
                ans.pb(x);
                for(auto edge:graph[x]){
                    if(--indegree[edge] == 1){
                        q.push(edge);
                    }
                }
            }
        }
        return ans;
        
    }
};









