class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
    //Using 2 pointer technique we have as
        int left=0;
        int right=n-1;
        for(int i=0;i<n;i++){
            while(nums[i] == 2 and i<right) swap(nums[i],nums[right--]);
            while(nums[i] == 0 and i>left) swap(nums[i],nums[left++]);
        }
        
    }
};