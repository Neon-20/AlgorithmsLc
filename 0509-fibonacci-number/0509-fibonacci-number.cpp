class Solution {
public:
    int fib(int n) {
        if (n <= 1)
            return n;

        vector<int> f(n + 1);
        f[0] = 0;
        f[1] = 1;
        int sum = 1;

        for (int i = 2; i <= n; i++) {
            f[i] = f[i - 1] + f[i - 2];
        }

        return f[n];
    }
};