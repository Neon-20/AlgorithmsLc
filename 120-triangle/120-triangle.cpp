class Solution {
public:
    int minimumTotal(vector<vector<int>>& nums) {
        // bottom up approach goes like this
        int n=nums.size();
        vector<int> last(n,-1);
        for(int i=0;i<n;i++){
            last[i]=nums[n-1][i];
        }
        for(int row=n-2;row>=0;row--){
            vector<int> current(row+1);
            for(int col=0;col<=row;col++){
                current[col]=min(last[col],last[col+1])+nums[row][col];
            }
            last=current;
        }
        return last[0];
    }
};