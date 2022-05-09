class Solution {
public:
    #define pb push_back
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> v;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(mp.find(target-nums[i])!=mp.end()){
                v.pb(mp[target-nums[i]]);
                v.pb(i);
                break;
            }
            mp[nums[i]]=i;
        }
        return v;
    }
};