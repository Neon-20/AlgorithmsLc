class Solution {
public:
    int firstUniqChar(string s) 
    {  
        for(int i=0;i<s.length();i++)
        {
            bool flag = true;
            for(int j=0;j<s.length();j++)
            {
                if(i!=j && s[i] == s[j])
                {
                    flag = false;
                    break;
                }
            }
            
            if(flag == true)
                return i;
        }
        return -1;
    }
};