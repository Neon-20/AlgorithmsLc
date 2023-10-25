class Solution {
public:
    int kthGrammar(int n, int k) {
      //return kth indexed symbol from there
        // kth symbol in grammar
         return __builtin_popcount(k-1) & 1;   
    }
};
// 0110