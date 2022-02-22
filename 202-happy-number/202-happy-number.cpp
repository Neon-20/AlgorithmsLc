class Solution {
public:
    int getsum(int n)
    {
        int tmp=n;
        int sum=0;
        while(n)
        {
            tmp=n%10;
            sum+=(tmp*tmp);
            n/=10;
        }
        return sum;
    }
    // Floyds cycle detection
    
    bool isHappy(int n) {
     int t=getsum(n);
        int r=getsum(getsum(n));
        while(t!=r)
        {
            t=getsum(t);
            r=getsum(getsum(r));
        }
        return t==1;
    }
};