class DSU {
private:
    vector<int> parent, rank, weights;

public:
    DSU(int n) {
        parent = vector<int>(n, 0);
        rank = vector<int>(n, 0);
        weights = vector<int>(n, 131071);
        for (int i = 0; i < n; i++)
            parent[i] = i;
    }

    int find(int x) {
        if (x != parent[x])
            parent[x] = find(parent[x]);
        return parent[x];
    }

    void union_(int x, int y, int weight) {
        int xx = find(x);
        int yy = find(y);
        if (rank[xx] < rank[yy])
            parent[xx] = yy;
        else
            parent[yy] = xx;
        weights[xx] = weights[yy] = weights[xx] & weights[yy] & weight;
        if (rank[xx] == rank[yy])
            rank[xx]++;
    }

    int minimumCostofWalk(int x, int y) {
        if (x == y)
            return 0;
        if (find(x) != find(y))
            return -1;
        return weights[find(x)];
    }
};

class Solution {
public:
    vector<int> minimumCost(int n, vector<vector<int>>& edges, vector<vector<int>>& query) {
        DSU ds(n);
        for (auto& x : edges)
            ds.union_(x[0], x[1], x[2]);
        vector<int> ans;
        for (auto& z : query)
            ans.push_back(ds.minimumCostofWalk(z[0], z[1]));
        return ans;
    }
};