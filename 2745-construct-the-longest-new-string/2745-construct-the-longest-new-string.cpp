class Solution {
public:
    int longestString(int x, int y, int z) {
       int a = min(x+1,y);
       int b = min(x,y+1);
       int ans = (a+b+z)*2;
       return ans;
    }
};
