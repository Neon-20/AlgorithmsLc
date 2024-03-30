class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        // LENGTH OF SPECIAL SUBARRAY
        int ans = 1e9;
        for(int i=0;i<n;i++){
            int x = 0;
            for(int j=i;j<n;j++){
                x|=nums[j];
                if(x>=k){
                    ans = min(ans,j-i+1);
                    break;
                }
            }
        }
        return (ans == 1e9) ? -1 : ans;
    }
};
