class Solution {
public:
    int furthestBuilding(vector<int>& nums, int bricks, int ladders) {
        int n=nums.size();
        //further building you can reach
        priority_queue<int> pq;
        for(int i=1;i<nums.size();i++){
            //agar prev se chota then continue
            if(nums[i]<=nums[i-1]) continue;
            int d=nums[i]-nums[i-1];
            if(d>0) pq.push(-d);//push negative diff
            if(pq.size()>ladders){
                bricks+=pq.top();
                pq.pop();
            }
            if(bricks<0){
                return i-1;
            }
        }
        return size(nums)-1;
    }
};