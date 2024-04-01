class Solution {
public:
    int minimumDistance(vector<vector<int>>& p) {
       //challenging question it was
       //all about manhattan distances over here
//         max( | x[i]-x[j] | + | y[i]-y[j] | )
      int n = p.size();
      set<pair<int,int>> s,e;
      for(int i=0;i<n;i++){
          int x = p[i][0]+p[i][1];
          int y = p[i][0]-p[i][1];
          s.insert({x,i});
          e.insert({y,i});
      }
        int ans = INT_MAX; 
        for(int i=0;i<n;i++){
            int x = p[i][0]+p[i][1];
            int y = p[i][0]-p[i][1];
            s.erase({x,i});
            e.erase({y,i});
            
            auto [a,ie] = *s.begin();
            auto [b,ig] = *s.rbegin();
            auto [c,il] = *e.begin();
            auto [k,im] = *e.rbegin();
            
           int distance = max(b-a,k-c);
            ans = min(distance,ans);
            
            s.insert({x,i});
            e.insert({y,i});
        }
        return ans;
    }
};