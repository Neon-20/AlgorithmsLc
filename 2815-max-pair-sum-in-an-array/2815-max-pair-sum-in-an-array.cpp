class Solution {
public:
    int maxSum(vector<int>& nums) {
       int ans =0;
       for(int i=0;i<nums.size();i++){
           string first = to_string(nums[i]);
           sort(begin(first),end(first));
           for(int j=i+1;j<nums.size();j++){
            string second = to_string(nums[j]);
           sort(begin(second),end(second));
        if(first[first.size()-1] == second[second.size()-1]){
            ans = max(ans,nums[i]+nums[j]);
        }
           }
       }
        return ans == 0 ? -1 : ans;
    }
};