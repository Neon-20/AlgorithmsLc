class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        //max number of consecutive ones
        int cnt=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1){
                    cnt++;
                }
            else{
                cnt=0;
            }
                ans=max(ans,cnt);
        }
        return ans;
    }
};