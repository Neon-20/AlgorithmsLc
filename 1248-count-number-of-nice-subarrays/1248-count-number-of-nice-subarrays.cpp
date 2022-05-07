class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        //number of nice subarrays
        // just mod it by 2 
        int n=nums.size();
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            nums[i]%=2;
        }
        mp[0]=1;
        // so find subarrays with sum k
        int sum=0;
        int ans=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(mp.count(sum-k)){
                ans+=mp[sum-k];
            }
            mp[sum]++;    
        }
        return ans;
        
    }
};