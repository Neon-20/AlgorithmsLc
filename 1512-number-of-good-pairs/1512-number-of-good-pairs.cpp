class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
      unordered_map<int,int> mp;
        int n=nums.size();
        int res=0;
        for(auto &x:nums)
        {
            res+=mp[x]++;
        }
        return res;
    }
};