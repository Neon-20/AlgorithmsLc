class Solution {
    // const int mod=1e9+7;
public:
   
    bool judgeSquareSum(int c) {
    long long a=0;
        long long b=sqrt(c);
        while(a<=b){
            if(a*a+b*b == c){
                return true;
            }
            else if(a*a+b*b<c){
                a++;
            }
            else{
                b--;
            }
        }
        return false;
    }
};