class Solution {
public:
    int getSum(int a, int b) {
        //sum of two integers
        int x;
        while(b!=0){
            x=(a&b);
            a^=b;
            b=(unsigned int)(x)<<1;
        }
        return a;
    }
};