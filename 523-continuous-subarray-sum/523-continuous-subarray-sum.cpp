class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
      //continuous subarray sum
        // base case
        int sum=0;
        map<int,int> mp;
        int n=size(nums);
        for(int i=0;i<n;i++){
            sum+=nums[i];
            sum%=k;
            if(sum == 0 and i!=0) return true;
            if(mp.count(sum)){
                if(i-mp[sum]>1) return true;
            }
            else{
                mp[sum]=i;
            }
        }
        return false;
    }
};