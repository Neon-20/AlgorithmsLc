class Solution {
public:
    int maximumUnits(vector<vector<int>>& nums, int sz) {
        sort(begin(nums),end(nums),[&](vector<int> &a,vector<int> &b){
           return a[1]>b[1]; 
        });
        int val=0;
        for(auto &x:nums){
            if(sz<=0) break;
            int boxcnt=min(x[0],sz);
             val+=boxcnt*x[1];
            sz-=boxcnt;
        }
        return val;
    }
};