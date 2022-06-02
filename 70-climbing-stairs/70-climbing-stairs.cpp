class Solution {
public:

    int climbStairs(int n) {
     vector<int> fib(n+1,0);
        if(n == 0) return 0;
        if(n == 1) return 1;
        if(n == 2) return 2;
        fib[0]=0;
        fib[1]=1;
        fib[2]=2;
        for(int i=3;i<=n;i++){
            fib[i]=fib[i-1]+fib[i-2];
        }
        return fib[n];
    }
};