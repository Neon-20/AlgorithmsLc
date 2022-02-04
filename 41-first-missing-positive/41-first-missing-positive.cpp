class Solution {
public:
  int firstMissingPositive(vector<int>& nums) {
    int n=nums.size();// ok nums
    unordered_map<int,int> mp;
    for(auto &x:nums)
    {
      if(x>0)
      {
        mp[x]++;// increase the frequency of nums
      }
    }
  // debug(mp);
    for(int i=1;i<=n;i++)
    {
      if(mp.find(i) == mp.end())
      {
        return i;
      }
    } 
    return n+1;

    }
};