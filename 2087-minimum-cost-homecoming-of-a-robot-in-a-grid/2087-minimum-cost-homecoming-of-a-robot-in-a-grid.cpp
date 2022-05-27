class Solution {
public:
    int minCost(vector<int>& startPos, vector<int>& homePos, vector<int>& row, vector<int>& col) {
        //jis row ya jis column me wo jaega
        //Just normal observation of moving a robot
        int x=startPos[0];
        int x1=homePos[0];
        int y=startPos[1];
        int y1=homePos[1];
        int ans=0;
        if(x == x1 and y == y1) return 0;
        if(x<x1){
            for(int i=x+1;i<=x1;i++){
                ans+=row[i];
            }
        }
        else{
            for(int i=x1;i<=x-1;i++){
                ans+=row[i];
            }
        }
        if(y<y1){
            for(int i=y+1;i<=y1;i++){
                ans+=col[i];
            }
        }
        else{
            for(int i=y1;i<=y-1;i++){
                ans+=col[i];
            }
        }
        return ans;
    }
};