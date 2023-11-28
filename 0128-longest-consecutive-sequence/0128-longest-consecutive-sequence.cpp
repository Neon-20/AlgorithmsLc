class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     int n = nums.size();
     unordered_set<int> s(begin(nums),end(nums));
        int longest = 0;
     for(auto&nums:s){
        if(s.count(nums-1)) continue;
        int j = 1;
        while(s.count(nums+j)) j++;
        longest = max(longest,j);
     }
        return longest;
    }
};