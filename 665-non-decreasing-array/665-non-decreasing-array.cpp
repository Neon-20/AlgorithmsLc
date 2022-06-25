class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        //non decreasing array
        int n=nums.size();
        int cnt=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){//peeche wala element bada
                cnt++;
                if(i>=2 and nums[i]<nums[i-2])
                    nums[i]=nums[i-1];
                else nums[i-1]=nums[i];
            }
        }
        if(cnt<=1) return true;
        else return false;
    }
};