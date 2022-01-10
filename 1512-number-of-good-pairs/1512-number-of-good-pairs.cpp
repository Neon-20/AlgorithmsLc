class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       map<int,int> mp;
        int res=0;
        int n=nums.size();
        for(auto &x:nums)
        {
            res+=mp[x]++;
        }
        return res;
    }
};