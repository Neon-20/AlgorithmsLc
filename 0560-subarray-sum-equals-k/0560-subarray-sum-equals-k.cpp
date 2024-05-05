class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //subarray sum equals k
        int n = nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                cnt+=(sum == k);
            }
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




