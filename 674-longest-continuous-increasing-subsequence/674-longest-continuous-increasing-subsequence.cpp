class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size();
        //longest continuous increasing subsequence
        int res=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(i==0 or nums[i-1]<nums[i]) res=max(res,++cnt);
            else cnt=1;
        }
        return res;
    }
};