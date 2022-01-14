class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        //Find out all numbers in the range
        // Logic behind this is
        // If we shift any number towards right and try to make it 1
        // We can do the same with l and r range
        int res=0;
        while(m!=n)
        {
            m>>=1;
            n>>=1;
            res++;
        }
        return m<<res;
    }
};