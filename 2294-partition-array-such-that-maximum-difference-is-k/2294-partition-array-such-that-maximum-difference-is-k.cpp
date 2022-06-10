class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
      sort(begin(nums),end(nums));
        int ans=1;
        int cnt=0;
        for(int i=0;i<size(nums);i++){
            if(nums[i]-nums[cnt]>k){
                ans++;
                cnt=i;
            }
        }
        return ans;
    }
};