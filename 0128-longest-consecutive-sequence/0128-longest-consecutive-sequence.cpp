class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int n = nums.size(); 
       if(n==0) return 0;
       int prev = INT_MIN;
       int cnt = 0;
       int longest = 1;
        sort(begin(nums),end(nums));
       for(int i=0;i<n;i++){
           if(prev == nums[i]-1){
               cnt++;
               prev = nums[i];
           }
           else if(prev != nums[i]){
               cnt = 1;
               prev = nums[i];
           }
           longest = max(longest,cnt);
       }
        return longest;
       
    }
};
