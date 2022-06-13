class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mp;
        mp[0]=0;
        int pref=0;
        int ans=0;
        for(int i=0;i<n;i++){
            pref+=(nums[i] == 0)?-1:1;
            if(mp.count(pref)){
                ans=max(ans,i-mp[pref]+1);
            }
            else mp[pref]=i+1;
        }
        return ans;
    }
};