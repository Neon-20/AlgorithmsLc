class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(begin(nums),end(nums));// 1 2 3 4 
       int sum=0;
        for(int i=nums.size()-1;i>0;i-=2)// 3 4 6 6 8 9
        {
            sum+=min(nums[i],nums[i-1]);
        }
        return sum;
    }
};