class Solution {
    // const int mod=1e9+7;
public:
   
    bool judgeSquareSum(int c) {
    for(int i=0;i<=sqrt(c);i++){
        double b=sqrt(c-i*i);
        if(b == int(b)){
            return true;
        }
    }
        return false;
    }
};