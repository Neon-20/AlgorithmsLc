class Solution {
public:
    
    // int max(int a,int b)
    // {
    //     if(a>b) return a;
    //     else return b;
    // }
         int ans=0; 
    bool isP(string &s)
    {
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;j--;
        }
        return 1;
    }

    void helper(string &s,int index,string &a,string &b)
    {
        if(index>=s.length())
        {
            if(isP(a) and isP(b))
            {
                ans=max(ans,(int)(a.size()*b.size()));
            }
            return;//
        }
        helper(s,index+1,a,b);
        a+=s[index];
        helper(s,index+1,a,b);
        a.pop_back();
        b+=s[index];
        helper(s,index+1,a,b);
        b.pop_back();  
      
    }
    int maxProduct(string s) {
        // Finding the longest disjoint pallindromic subsequence
        // We will just do it in backtracking method or we could say the
        //brute force approach
        string a="";
        string b="";
        helper(s,0,a,b);
        return ans;
    }
};