class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
    int low=0;
        int high=n-1;
        int res=0;
        while(res<=high){
            if(nums[res]==0){
                swap(nums[low++],nums[res++]);
            }
            else if(nums[res]==1){
                res++;
            }
            else{
                swap(nums[high],nums[res]);
                high--;
            }
        }
    }
};