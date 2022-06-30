class Solution {
public:
   
    int climbStairs(int n) {
    int a=1,b=1,c;
        while(n>1){
            c=a+b;
            a=b;
            b=c;
            n--;
        }
        return b;
    }
};