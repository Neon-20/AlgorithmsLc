class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = size(nums);
        //3 sum
        vector<vector<int>> ans;
        unordered_map<int,int> mp;
        sort(begin(nums),end(nums));
        //store the details in the map
        if(n<3) return{};
        if(nums[0]>0) return {};
        for(int i=0;i<n;i++){
            mp[nums[i]] = i;
        } 
        //store the index in values pair
        for(int i=0;i<n-2;i++){
            if(i!=0 and nums[i-1]==nums[i]) continue;
            if(nums[i]>0) return ans;
            for(int j=i+1;j<n;j++){
                if(j!=i+1 and nums[j-1]==nums[j]) continue;
                int key = -(nums[i]+nums[j]);
                if(mp.find(key)!=mp.end() and mp[key]>j){
                    ans.push_back({nums[i],nums[j],key});
                }
            }
        }
        return ans;
        
    }
};