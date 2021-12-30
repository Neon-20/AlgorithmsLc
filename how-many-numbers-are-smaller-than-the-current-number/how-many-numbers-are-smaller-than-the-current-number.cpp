class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       int n=nums.size();
        vector<int> v =nums;
         sort(begin(v),end(v));
        unordered_map<int,int> mp;
      for(int i=n-1;i>=0;i--)
      {
          mp[v[i]]=i;
      }
        for(int i=0;i<n;i++)
        {
            nums[i]=mp[nums[i]];
        }
        return nums;
        
        
       
    }
};