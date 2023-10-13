class Solution {
public:
    int minOperations(string s1, string s2, int x) {
        int n = s1.size(), done = 0, inf = 1e6, one = inf, last = inf, two = inf;
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] == s2[i]) {
                last++;
                two++;
            } else if (done < n) {
                one = min(done, two + 1);
                last = min(done, two + x);
                done = two = inf;
            } else {
                done = min(one + x, last + 1);
                two = one;
                one = last = inf;
            }
        }
        return done < inf ? done : -1;
    }
};