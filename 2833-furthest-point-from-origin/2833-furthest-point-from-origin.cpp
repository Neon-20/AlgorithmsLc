class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n=moves.length();
        int left=0;
        int right=0;
        int extra=0;
        for(auto x:moves){
            if(x == '_'){
                extra++;
            }
            else if(x == 'L'){
                left--;
            }
            else{
                left++;
            }
        }
        return abs(left)+extra;
    }
};