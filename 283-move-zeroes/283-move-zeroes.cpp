class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[j++]=nums[i];
            }
        }//done
        //noW
        while(j<nums.size()){
            nums[j++]=0;
        }
    
        
    }
};