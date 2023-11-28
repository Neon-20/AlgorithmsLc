class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    int n = nums.size();
    // we use set and it does the job for us
    unordered_set<int> s(begin(nums),end(nums));
    int longest = 0;
    for(auto &x:s){
        if(s.count(x-1)) continue;
        int j=0;
        while(s.count(x+j)) j++;
        longest = max(longest,j);
    }
        return longest;
    }
};