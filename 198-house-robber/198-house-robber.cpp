class Solution {
public:
    int rob(vector<int>& nums) {
       int n=nums.size();
        int pre=0;
        int current=0;
        for(int i=0;i<n;i++){
           int temp=max(pre+nums[i],current);
           pre=current;
           current=temp;
        }
        return current;
    }
};