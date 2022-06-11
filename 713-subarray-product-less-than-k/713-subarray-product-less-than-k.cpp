class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
         int n=nums.size();
    int start=0;
    int end=0;
    int cnt=0;
    int product=1;
    while(end<n){
        if(product*nums[end]<k){
            product*=nums[end];
            end++;
            cnt+=end-start;
        }
        else{
            if(start == end)
            {
                start++;
                end++;
            }
            else{
                product/=nums[start];
                start++;
            }
        }
    }
     return cnt;
    }
};