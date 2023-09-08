class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        long long n = size(nums);
        long long currentSum = 0;
        long long maxSum = 0;
        unordered_map<int,int> freq;
        long long left=0;
        for(int j=0;j<nums.size();j++){
            freq[nums[j]]++;
            currentSum+=nums[j];
            while(j-left+1>k){
                freq[nums[left]]--;
                if(freq[nums[left]] == 0){
                    freq.erase(nums[left]);
                }
                currentSum -= nums[left];
                left++;
            }
            if(freq.size()>=m){
                maxSum = max(maxSum,currentSum);
            }
        }
        return maxSum;
    }
};