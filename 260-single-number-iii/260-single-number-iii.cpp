class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mp;
        for(auto &x:nums)
        {
            mp[x]++;// 1 
        }
        vector<int> ans;
        for(auto &x:mp)
        {
            if(x.second == 1)
            {
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};