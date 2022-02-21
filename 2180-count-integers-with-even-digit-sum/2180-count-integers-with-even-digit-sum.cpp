class Solution {
public:
    int countEven(int num) {
       int temp=num;int res=0;
        while(num>0)
        {
            res+=num%10;
            num/=10;
        }
        return (res%2 == 0 ? (temp)/2:(temp-1)/2);
    }
};
 // 30
 //     1 2 3 4 5 6 7 8 9 10 ->> 4 whose sum is even
 //     11 12 13 14 15 16 17 18 19 20 ->> 6 whose sum is even
 //     21 22 23 24 25 26 27 28 29 30 ->> 4 whose sum is even
 //     14 numbers whose sum is even
 //     means 
 //     15 whose sum is odd
     
     
     