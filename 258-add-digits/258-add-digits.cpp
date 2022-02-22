class Solution {
public:
    int addDigits(int num) {
      // Just check divisibility by 9
       if(num == 0) return 0;
        if(num%9) return num%9;
        return 9;
            
    }
};