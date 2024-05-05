class Solution {
public:
    long long minEnd(int n, int x) {
        long long a = x;
        while(--n>0){
            a = (a+1) | x;
        }
        return a;
    }
};
// all bitwise AND is x

