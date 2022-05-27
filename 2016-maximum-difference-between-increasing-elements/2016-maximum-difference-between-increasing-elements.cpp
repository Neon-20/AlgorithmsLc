class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int diff=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                diff=nums[j]-nums[i];
                 ans=max(ans,diff);
                }
            }
        if(ans==0) return -1;
    else return ans;
    }
};