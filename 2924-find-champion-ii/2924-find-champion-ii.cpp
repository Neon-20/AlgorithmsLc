class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
       //edges ko store kro
        vector<int> indegree(n+1,0);
        for(auto &x:edges){
            indegree[x[1]]++;
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(!indegree[i]) ans.push_back(i);
        }
        if(ans.size()==1) return ans[0];
        return -1;
    }
};