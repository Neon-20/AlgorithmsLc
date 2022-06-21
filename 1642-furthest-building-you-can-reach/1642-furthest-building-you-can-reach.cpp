class Solution {
public:
    int furthestBuilding(vector<int>& nums, int bricks, int ladders) {
        int n=nums.size();
        multiset<int> s;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>=nums[i]) continue;
            int d=nums[i]-nums[i-1];
            if(d>0) s.insert(d);
            if(s.size()>ladders){
                bricks-=*s.begin();
                s.erase(s.begin());
            }
            if(bricks<0) return i-1;
        }
        return n-1;
    }
};