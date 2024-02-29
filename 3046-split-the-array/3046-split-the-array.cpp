class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(101,0);
        for(auto x:nums){
            freq[x]++;
        }
        for(auto f:freq)
            if(f>2) return false;
        return true;
    }
};