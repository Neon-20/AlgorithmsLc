class Solution {
public:
    
 
    bool canBeValid(string s, string locked) {
       int left=0;
       int right=0;
        int n=s.size();
        if(n%2) return false;
        for(int i=0;i<n;i++)// Traversing from left to right
        {
            if(locked[i] == '1')
            {
                if(s[i] == '(')
                    right++;
                else right--;
                if(right<0 and left<-right) return false;
            }
            else left++;
        }
        
        
        left=0;right=0;
        for(int i=n-1;i>=0;i--)// Traversing from right to left
        {
            if(locked[i] == '1')
            {
                if(s[i] == '(')
                    right++;
                else right--;
                if(right>0 and left<right) return false;
            }
            else left++;
        }
        return true;
    }
};
    