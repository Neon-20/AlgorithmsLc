class Solution {
public:
    int part(vector<int> &nums,int left,int right,int k){
        int pivot=nums[right];
        int p=left;
        for(int i=left;i<right;i++){
            if(nums[i]<=pivot){
                swap(nums[p],nums[i]);
                ++p;
            }  
        }
        swap(nums[right],nums[p]);
        if(k<p) return part(nums,left,p-1,k);
        else if(p<k) return part(nums,p+1,right,k);
         return nums[p];
    }
    int findKthLargest(vector<int>& nums, int k) {
       int n=nums.size();
        k=n-k;
        return part(nums,0,n-1,k);
    }
};
// 6 5 4 3 2 1 