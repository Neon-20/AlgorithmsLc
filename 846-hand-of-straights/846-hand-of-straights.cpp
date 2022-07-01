class Solution {
public:
    bool isNStraightHand(vector<int>& nums, int sz) {
       // group is of size 3 or 4 or 5
        // And consists of each every group cards
        int n=nums.size();
        map<int,int> mp;
        for(int x:nums) mp[x]++;
        for(auto x:mp){
            if(x.second>0){
                for(int i=sz-1;i>=0;i--){
                    if((mp[x.first+i]-=x.second)<0) 
                        return false;
                }
            }
        }
        return true;
    }
};
       