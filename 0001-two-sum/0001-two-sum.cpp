class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     int n = nums.size();
      map<int,int> mp;
      vector<int> ans;
      for(int i=0;i<n;i++){
        int diff = target - nums[i];
        if(mp.find(diff)!=mp.end()){
          ans.push_back(mp[diff]);
          ans.push_back(i);
        }
        mp[nums[i]] = i;
      }
      return ans;
    }
};