class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        map<int,int> mp;
        int ans=0;
        mp[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(mp.count(sum-k)){
                ans+=mp[sum-k];
            }
            mp[sum]++;
        }
        return ans;
    }
};