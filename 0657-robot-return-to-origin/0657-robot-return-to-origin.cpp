class Solution {
public:
    bool judgeCircle(string moves) {
        int left = 0;
        int right = 0;
        int up = 0;
        // int down = 0;
        for(auto x:moves){
            if(x == 'U'){
                up++;
            }
            else if(x == 'D'){
                up--;
            }
            else if(x == 'L'){
                left--;
            }
            else{
                left++;
            }
        }
        return up == 0 and left == 0;
    }
};