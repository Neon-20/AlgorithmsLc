class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
      int n=size(nums);
        map<int,int> mp;
       int ans=0;
        mp[0]=1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int remainder=sum%k;
            if(remainder<0) remainder+=k;
            if(mp.count(remainder)){
                ans+=mp[remainder];
            }
            mp[remainder]++;
        }
        return ans;
    }
};