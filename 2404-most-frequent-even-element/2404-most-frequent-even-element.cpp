class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;
        for(auto x:nums){
             if (x % 2 == 0) {
                mp[x]++;
            }
        }
        int mx = 0;
        int res = -1;
        for(auto x:mp){
           if(mx<x.second){
              mx = x.second;
                res = x.first;
           }
        }
        return res;
    }
};