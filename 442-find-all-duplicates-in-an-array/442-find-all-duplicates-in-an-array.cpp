class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        // find all duplicates in the array
        // so now we have as
       map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }
            vector<int> ans;
        for(auto x:mp){
            if(x.second>1){
                ans.push_back(x.first);
            }
        }
        return ans;
        
    }
};