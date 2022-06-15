class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=size(nums);
        //we just find the middle of the array like
        //total-x k barabar ya bada
        int sum=0;
        int right=0;
        int len=-1;
        int total=accumulate(begin(nums),end(nums),0);
        if(total<x) return -1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            while(sum>total-x){
                sum-=nums[right++];
            }
            if(sum == (total - x)){
                len=max(len,i-right+1);
            }
        }
               if(len == -1) return -1;
               else return n-len;
    } 
};