class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int j=0;
        int max_len=-1;
        // (sum up to total-x)
        int total=std::accumulate(nums.begin(),nums.end(),0);
        int sum=0;
        if(total<x) return -1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            while(sum>total-x){//agar bada aagya to window shft krenge
             sum-=nums[j++];
            }
            if(sum == (total - x)){
                max_len=max(max_len,i-j+1);
            }
        }
        if(max_len == -1)
            return -1;
        else return n-max_len;
        
    } 
};