class Solution {
public:
    // const int nax=1e5+5;
    int findDuplicate(vector<int>& nums) {
      sort(nums.begin(),nums.end());
        bool ok=false;
        int ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == nums[i+1]){
                ok=true;
                ans=nums[i];
                break;
            }
         }
          if(ok) return ans;
        else return -1;
    }
};