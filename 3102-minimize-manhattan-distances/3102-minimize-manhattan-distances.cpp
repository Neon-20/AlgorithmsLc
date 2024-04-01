class Solution {
public:
    int minimumDistance(vector<vector<int>>& points) {
        int n = points.size();
        multiset<int> s, e;
        for (auto it : points) {
            int x = it[0] + it[1];
            int y = it[0] - it[1];
            s.insert(x);
            e.insert(y);
        }
        int ans = INT_MAX;
        for (int i = 0; i < n; i++) {
            int x = points[i][0] + points[i][1];
            int y = points[i][0] - points[i][1];
            s.erase(s.find(x));
            e.erase(e.find(y));
            
            auto a = *s.begin();
            auto b = *s.rbegin();
            auto c = *e.begin();
            auto k = *e.rbegin();
            
            int distance = max(b - a, k - c);
            ans = min(distance, ans);
            
            s.insert(x);
            e.insert(y);
        }
        return ans;
    }
};
