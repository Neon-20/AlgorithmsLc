class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0;
        int y;
        int initial = x;
       while(x!=0){
           y=x;
           x/=10;// x = 1
           y%=10;// y = 1
           sum+=y;
       }
        return (initial%sum) ? -1:sum;
    }
};