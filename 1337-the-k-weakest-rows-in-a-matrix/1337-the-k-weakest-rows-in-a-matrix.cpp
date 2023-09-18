class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        // {x,y}
        priority_queue<pair<int,int>,vector<pair<int,int>>,
        greater<pair<int,int>>> pq; //min heap
        for(int i=0;i<mat.size();i++){
            int cnt=0;//for each row that's why
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j] == 1) cnt++;
            }
            pq.push({cnt,i});
        }
        vector<int> ans;
        while(!pq.empty() and k-->0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};