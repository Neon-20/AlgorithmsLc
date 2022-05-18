class Solution {
public:
    bool canArrange(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> cnt(k);
        for(int x:nums){
            x%=k;
            if(x<0) x+=k;
            cnt[x]++;//remainder increment
        }
        if(cnt[0]%2!=0) return false;
        for(int i=1;i<=k/2;i++){
            if(cnt[i]!=cnt[k-i]) return false;
        }
        return true;
    }
};