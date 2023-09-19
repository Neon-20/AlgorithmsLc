class Solution {
public:
    int smallestEvenMultiple(int n) {
       //smallest even multiple
        if(n%2) return n*2;
        else return n;
    }
};