class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
      int n=size(nums);
        map<int,int> mp;
        // cnt the frequency of the prefix sums
        int ans=0;
        int sum=0;
        mp[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];//prefix sums
            int remainder=sum%k;
            if(remainder<0) remainder+=k;//-1 mod 5
            if(mp.count(remainder)){
                ans+=mp[remainder];
            }
            mp[remainder]++;
        }
        return ans;
    }
};