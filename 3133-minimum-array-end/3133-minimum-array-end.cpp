class Solution {
public:
    long long minEnd(int n, int x) {
       //bit manipulation
        long long res = x;
        while(--n>0){
            res = (res+1) | x;
        }
        return res;
    }
};

