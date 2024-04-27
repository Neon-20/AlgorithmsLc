class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        int n = nums.size();
        int ans = 1;
        if(n==0) return 0;
        for(auto x:nums) s.insert(x);
//         Just check for starting number
        for(auto x:s){
            if(s.find(x-1)==s.end()){
                int cnt = 1;
                int temp = x;
                while(s.find(x+1)!=s.end()){
                    x++;cnt++;
                }
                ans = max(ans,cnt);
            }
        }
        return ans;
    }
};
// solving in O(n)