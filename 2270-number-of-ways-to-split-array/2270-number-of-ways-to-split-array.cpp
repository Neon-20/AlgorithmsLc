class Solution {
public:
    #define ll long long
    int waysToSplitArray(vector<int>& nums) {
        //number of ways to split array
        //calculate the prefix sum and cnt 
        int n=size(nums);
      vector<long long> prefix(n);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        ll cnt=0;
        ll left=0,right=0;
        for(int i=0;i<n-1;i++){
            left=prefix[i];
            right=prefix[n-1]-prefix[i];
            if(left>=right) cnt++;
        }
        return cnt;
    }
};