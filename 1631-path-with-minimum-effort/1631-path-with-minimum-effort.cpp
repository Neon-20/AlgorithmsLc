class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        //path with min effort
    // creating the differences as well
    int n=heights.size();
    int m=heights[0].size();
        priority_queue<pair<int,pair<int,int>>,
        vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>>> pq;
        //Now we have as {diff,{row,col}}
        vector<vector<int>> dist(n,vector<int>(m,1e9));
        dist[0][0]=0;
        pq.push({0,{0,0}});
        int dx[] ={-1,0,1,0};
        int dy[] ={0,1,0,-1};
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int diff = it.first;
            int row = it.second.first;
            int col = it.second.second;
            if(row == n-1 and col == m-1) return diff;
            
            for(int i=0;i<4;i++){
                int newrow = row+dx[i];
                int newcol = col+dy[i];
                if(newrow >= 0 and newcol >=0 and newrow< n and newcol<m){
int newEffort = max(abs((heights[row][col]) - (heights[newrow][newcol])),diff);
                 if(newEffort < dist[newrow][newcol]){
                     dist[newrow][newcol] = newEffort;
                     pq.push({newEffort,{newrow,newcol}});
                 }
            }
        }
    }
            return 0;
    }
};