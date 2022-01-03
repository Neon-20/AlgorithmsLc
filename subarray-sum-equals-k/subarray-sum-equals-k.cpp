class Solution {
public:
    #define ll long long
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<ll,int> mp{{0,1}};
         ll ans=0,sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            ans+=mp[sum-k];
            mp[sum]++;
        }
        return ans;
    }
};