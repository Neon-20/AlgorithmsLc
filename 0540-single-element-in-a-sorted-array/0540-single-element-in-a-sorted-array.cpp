class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //single element in a sorted array
        int n = nums.size();
        //use map first
        map<int,int> mp;
        for(auto x:nums) mp[x]++;
        for(auto x:mp){
            if(x.second == 1) return x.first;
        }
        return -1;
    }
};