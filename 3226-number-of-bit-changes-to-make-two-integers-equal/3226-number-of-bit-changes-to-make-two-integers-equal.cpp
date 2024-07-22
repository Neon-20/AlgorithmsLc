class Solution {
public:
    static int minChanges(int n, int k) {
        return ((n&k)<k)?-1:bitset<20>(n^k).count();
    }
};