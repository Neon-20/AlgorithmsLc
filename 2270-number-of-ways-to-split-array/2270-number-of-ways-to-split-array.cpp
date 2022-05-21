class Solution {
public:
    #define ll long long
    int waysToSplitArray(vector<int>& nums) {
        //number of ways to split array
        //calculate the prefix sum and cnt 
       ll left=0;
       ll right=0;
       ll cnt=0;
        int n=size(nums)-1;
        for(auto x:nums) right+=x;
        for(auto i=0;i<n;i++){
            left+=nums[i];
            right-=nums[i];
            if(left>=right) cnt++;
        }
        return cnt;
    }
};