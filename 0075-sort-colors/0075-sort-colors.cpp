class Solution {
public:
    void sortColors(vector<int>& nums) {
       //dont return anything over here
      int n = nums.size();
      int zero_cnt = 0;
      int one_cnt = 0;
      for(int i=0;i<n;i++){
        if(nums[i]==0){
          zero_cnt++;
        }
        else if(nums[i]==1){
          one_cnt++;
        }
      }
      for(int i=0;i<n;i++){
        if(zero_cnt>0){
          nums[i]=0;
          zero_cnt--;
        }
        else if(one_cnt>0){
          nums[i]=1;
          one_cnt--;
        }
        else{
          nums[i]=2;
        }
      }
    }
};