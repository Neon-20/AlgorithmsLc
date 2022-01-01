class Solution {
public:
    
 
    bool canBeValid(string s, string locked) {
    int left=0;
    int right=0;
        if(s.size()%2) return false;
           for(int i=0;i<s.size();i++)
           {
               if(locked[i] == '1')
               {
                   if(s[i] == '(')
                       right++;
                   else right--;
                   if(right<0 and left<-right)
                       return false;
               }
               else left++;
           }
        left=0;
        right=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(locked[i] == '1')
            {
                if(s[i] == '(')
                    right++;
                else right--;
                if(right>0 and left<right)
                    return false;
            }
            else left++;
        }
        return true;
    }
};
    