class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n=nums.size()-1;
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int ans=sum;
        while(k--){
            sum-=nums[k];
            sum+=nums[n];
            ans=max(ans,sum);
            n--;
        }
        return ans;
    }
};