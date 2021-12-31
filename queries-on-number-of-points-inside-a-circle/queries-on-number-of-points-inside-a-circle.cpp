class Solution{
    public:
vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
    vector<int> res;
    for (auto &q : queries) {
        int cnt = 0, rr = q[2] * q[2];
        for (auto &p : points)
            cnt += (q[0] - p[0]) * (q[0] - p[0]) + (q[1] - p[1]) * (q[1] - p[1]) <= rr;
        res.push_back(cnt);
    }
    return res;
}
};