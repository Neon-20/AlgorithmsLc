class Solution {
public:
    struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
    int maximumUniqueSubarray(vector<int>& nums) {
    //set always
        int n=size(nums);
        unordered_set<int,custom_hash> s;
        int i=0;
        int j=0;
        int current_sum=0;
        int mx_sum=0;
        while(i<n and j<n){
            if(!s.count(nums[j])){
                s.insert(nums[j]);
                current_sum+=nums[j];
                mx_sum=max(mx_sum,current_sum);
                j++;
            }
            else{
                current_sum-=nums[i];
                s.erase(nums[i]);
                i++;
            }
        }
        return mx_sum;
    }
};