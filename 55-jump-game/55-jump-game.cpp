class Solution {
public:
    bool canJump(vector<int>& nums) {
        // int n=nums.size();
        // We have to jump and find out the way to solve this.
        // We can just check the validity of steps here..
        int step=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            step--;
            if(step<0) return false;
            if(nums[i]>step)
                step=nums[i];
        }
        return true;
    }
};