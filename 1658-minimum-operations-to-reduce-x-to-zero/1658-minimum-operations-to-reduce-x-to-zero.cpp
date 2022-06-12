class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=size(nums);
        int total=accumulate(begin(nums),end(nums),0);
        if(total<x) return -1;
        int sum=0;
        int j=0;
        int max_len=-1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            while(sum>total-x){
                sum-=nums[j++];
            }
            if(sum == (total - x)){
                max_len=max(max_len,i-j+1);
            }
        }
        if(max_len==-1) return -1;
        else return n-max_len;
    } 
};