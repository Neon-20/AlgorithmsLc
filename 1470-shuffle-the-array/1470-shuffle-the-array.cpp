class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
    //Solving using in place
        // int n=nums.size();
       for(int i=2*n-1;i>=0;i--){
           int var=i;
           do{
               if(var&1) var=var/2+n;
               else var/=2;
           }
           while(var>i);
               swap(nums[i],nums[var]);
       }
        return nums;
    }
};