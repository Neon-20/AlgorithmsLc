class Solution {
public:
    int longestSubsequence(vector<int>& nums, int d) {
          unordered_map<int, int> m;
        int res = 1;
        for (int i : nums) {
            if (m.count(i - d)) {
                res = max(res, m[i] = m[i - d] + 1);
            } else {
                m[i] = 1;
            }
        }
        return res;
    }
};