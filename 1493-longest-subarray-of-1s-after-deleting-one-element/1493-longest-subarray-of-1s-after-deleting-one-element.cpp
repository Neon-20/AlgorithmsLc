class Solution {
public:
    int longestSubarray(vector<int>& nums) {
          int zero=0;
        int i=0,j=0,res=0;
        while(j<nums.size()){
            if(nums[j]==0)
                zero++;
            if(zero>1){
                while(nums[i++]!=0);
                zero--;
            }
            res=max(res,j-i); 
            j++;
        }
        return res;
    }
};