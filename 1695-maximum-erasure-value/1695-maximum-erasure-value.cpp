class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        // int n=nums.size();
        //maximum erasure value
        //erase exactly one subarray
        //max sum subarray with uniqueness
        set<int> s;
       int l=0;
        int r=0;
        int n=size(nums);
        int current=0,msum=0;
       while(l<n and r<n){
           if(!s.count(nums[r])){
               s.insert(nums[r]);
               current+=nums[r];
               msum=max(msum,current);
               r++;
           }
           else{
               current-=nums[l];
               s.erase(nums[l]);
               l++;
           }
       }
        return msum;
    }
};