class Solution {
public:
    // #define pb push_back
    vector<int> twoSum(vector<int>& nums, int target) {
        // int ans=0;
        map<int,int> mp;
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(mp.count(target-nums[i])){
                ans.push_back(mp[target-nums[i]]);
                ans.push_back(i);
            }
            mp[nums[i]]=i;
        }
        return ans;
    }
};