class Solution {
public:
        
    int fib(int n) {
      // int f[n+1];
        if(n<2) return n;
        // if n==1 then answer 1, if n==0 f[n]=0
        long long a=0,b=1,c;
        while(n>1){
            c=a+b;
            a=b;
            b=c;
            n--;
        }
        return b;
    }
};