class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
      set<vector<int>> s;
        //create a vector so that it could act as distinct subarray
        for(int i=0;i<nums.size();i++){
            int cnt=0;
            vector<int> ans;
            for(int j=i;j<nums.size();j++){
                    cnt+=(nums[j]%p==0);
                    ans.push_back(nums[j]);        
                    if(cnt<=k) s.insert(ans);    
            }
        }
        return s.size();
    }
};