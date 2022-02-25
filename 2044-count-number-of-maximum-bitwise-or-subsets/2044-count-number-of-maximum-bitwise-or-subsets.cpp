class Solution {
public:
    // Count number of 
    int countMaxOrSubsets(vector<int>& nums) {
        // Bro this is bitmask
        // Jab tak 2 number ka OR value same at
        // Kisi partcular ith value k liye I can do it
        int n=nums.size();
        int mx=0;
        for(auto x:nums) 
        {
            mx|=x;
        }
        int cnt=0;
        for(int mask=0;mask<(1<<n);mask++)
        {
            int answer=0;
            for(int j=0;j<n;j++)
            {
                if(mask&(1<<j)){
                   answer|=nums[j];
                 }
            }
            if(answer == mx)
                cnt++;
        }
        return cnt;
        
    }
};