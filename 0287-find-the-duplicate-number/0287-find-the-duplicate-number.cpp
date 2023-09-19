class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        //find the duplicate number
        sort(begin(nums),end(nums));
        for(int i=1;i<size(nums);i++){
            if(nums[i-1] == nums[i]){
                return nums[i];
            }
        }
        return -1;
    }
};