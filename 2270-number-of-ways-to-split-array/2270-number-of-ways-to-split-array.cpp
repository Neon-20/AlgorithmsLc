class Solution {
public:
    #define ll long long
    int waysToSplitArray(vector<int>& nums) {
        int n=size(nums);
        ll left=0;
        ll right=0;
        ll cnt=0;
        for(int i=0;i<n;i++) right+=nums[i];
        for(int i=0;i<n-1;i++){
            left+=nums[i];
            right-=nums[i];
            if(left>=right) cnt++;
        }
        return cnt;
    }
};