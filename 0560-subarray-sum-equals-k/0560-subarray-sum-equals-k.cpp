class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       //subarray sum equals k
        int n = size(nums);
        int cnt = 0;
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                cnt+=(sum==k);
            }
        }
        return cnt;
    }
};



