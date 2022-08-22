class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0)
            return 0;
        while(n > 1) {
            if(n % 3 != 0)
                return 0;
            else
                n = n / 3;    
        }   
        return 1;
    }
};