class Solution {
public:
    int maxEqualFreq(vector<int>& nums) {
        int n=nums.size();
        //max equal freq
        vector<int> cnt(100001);
        vector<int> freq(100001);
        for(auto x:nums){
            cnt[x]++;
            freq[cnt[x]]++;
        }
        for(int i=n-1;i>=0;i--){
            if(freq[cnt[nums[i]]] * cnt[nums[i]] == i) return i+1;
            freq[cnt[nums[i]]]--;
            cnt[nums[i]]--;
            if(freq[cnt[nums[i-1]]] * cnt[nums[i-1]] == i)
                return i+1;
        }
        return 1;
        
    }
};
// 2 -> 2     2->2
// 1 -> 2
// 5 -> 2
// 3 -> 2
       
