class Solution {
public:
    int distanceTraveled(int x, int y){
        int ans=0;
        for(int i=1;i<=x;i++){
            if(y!=0 and i%5==0){
                y--;x++;
            }
            ans+=10;
        }
        return ans;
    }
};