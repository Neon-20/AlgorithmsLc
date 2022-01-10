class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       map<int,int> mp;
        int res=0;
        int n=nums.size();
        for(auto &x:nums)
        {
            res+=mp[x]++;//
            // Dry run it
            //   res=0 then mp[1]=0;
            //   res =1 then mp keeps increasing
        }
        return res;
    }
};