class Solution {
public:
    int medianOfUniquenessArray(vector<int>& nums) {
        int n = nums.size();
        int left = 1;
        int right = n;
//         total no. of subarrays
        long long total = (long long) n*(n+1)/2;
        while(left<right){
            int k = (left+right)/2;
            if(atmost(nums,k)*2>=total){
                right = k;
            }
            else{
                left = k+1;
            }
        }
        return left;
    }
    long long atmost(vector<int> &nums,int k){
        unordered_map<int,int> mp;
        int n = nums.size();
        int i=0;
        long long ans = 0;
        for(int j=0;j<n;j++){
            mp[nums[j]]++;
            while(mp.size()>k){
                mp[nums[i]]--;
                if(mp[nums[i]]==0){
                    mp.erase(nums[i]);
                }
                i++;
            }
            ans+=j-i+1;
        }
        return ans;
    }
};