class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mp;
      for(auto x:nums) mp[x]++;
      for(auto x:mp){
        if(x.second == 1){
          return x.first;
        }
      }
      return {};
    }
};