class Solution {
public:
    #define ll long long
    int smallestRepunitDivByK(int k) {
        
        int n=0;
        if(k%2 == 0 or k%5 == 0) return -1;
        for(int i=0;i<k;i++)
        {
            n=n*10+1;
            n%=k;
            if(n == 0) return i+1;
        }
        return -1;
    }
};