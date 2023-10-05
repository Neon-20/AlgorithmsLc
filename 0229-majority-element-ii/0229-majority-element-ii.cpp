class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
//         appears more than n/3 times
        map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }
        vector<int> ans;
        int vals = floor(n/3);
        for(auto x:mp){
            if(x.second > vals){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};