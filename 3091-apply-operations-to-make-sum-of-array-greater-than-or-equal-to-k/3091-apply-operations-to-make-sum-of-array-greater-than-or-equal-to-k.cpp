class Solution {
public:
    int minOperations(int k) {
        //looks easy to me.
        if(k == 1) return 0;
        int m = sqrt(k);
        return m-1 + (k-1)/m;
    }
};
//ans = increment + duplicates

