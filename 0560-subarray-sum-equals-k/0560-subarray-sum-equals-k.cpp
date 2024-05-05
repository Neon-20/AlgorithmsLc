class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //subarray sum equals k
        int n = nums.size();
        int sum = 0;
        int cnt = 0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int j=0;j<n;j++){
            sum+=nums[j];
            cnt+=mp[sum-k];
            mp[sum]++;
        }
        return cnt;
    }
};
// subarray sum equals k
// 1 1 1
// mp[0] = 1
// sum = 2
// cnt+=mp[1] cnt = 2
// mp[1]++ = 1
// mp[2]++ = 1




