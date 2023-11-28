class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       //solution should have only constant space ok
        int n = nums.size();
        //so we could use 2 pointer technique I guess
        int i=0;
        int j=n-1;
        // vector<int> ans;
        int sum = 0;
        while(i<j){
            sum = nums[i]+nums[j];
         if(sum == target){
             return {i+1,j+1};
         }   
            else if(sum<target){
                i++;
            }
            else{
                j--;
            }
        }
          return {};
    }
};