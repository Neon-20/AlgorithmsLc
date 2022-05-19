class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        //We can use 2 pointers here array is sorted already
        map<int,int> mp;
        vector<int> v;
        for(int i=0;i<n;i++){
            if(mp.find(target-nums[i])!=mp.end()){
                v.push_back(mp[target-nums[i]]+1);
                v.push_back(i+1);
            }
            mp[nums[i]]=i;
        }
        return v;
    }
};