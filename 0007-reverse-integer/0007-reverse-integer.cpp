class Solution {
public:
    int reverse(int x) {
     long long remainder = 0;
     while(x){
         remainder = remainder*10+x%10;
         x/=10;
     }
         if(remainder<INT_MIN or remainder>INT_MAX){
             return 0;
         }
        return remainder;
    }
};