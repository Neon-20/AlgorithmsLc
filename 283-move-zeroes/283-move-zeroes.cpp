class Solution {
public:
    void moveZeroes(vector<int>& nums) {
          int j=0;//as a flag pointer.. basically 2 pointer approach
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }//now we filled the array without zeros
            //now fill with zeros in last
        }
        while(j<nums.size())
        {
            nums[j]=0;
            j++;
        }
        
            
    }
};