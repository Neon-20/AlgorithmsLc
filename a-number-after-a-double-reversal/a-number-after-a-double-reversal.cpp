class Solution {
public:
 
     int isSameAfterReversals(int num) {
      // reverse the number //
        if(num == 0) return true;
        int digit=num;
        while(num>0)
        {
            digit%=10;// 526=6
            num/=10;
        }// 625
     return digit;
        // int res=digit;
        //  while(digit>0)
        // {
        //     res%=10;// 526=6
        //     digit/=10;
        // }
        // if(res == num) return true;
        // else return false;
        
        
    }
};