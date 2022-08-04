class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        //sort array by parity
        // now we have as:
        int n=size(nums);
        vector<int> ans(n,0);
        int odd=1;
        int even=0;
        for(int x:nums){
            if(x%2 == 0){
                ans[even]=x;
                even+=2;
            }
           else{
                ans[odd]=x;
                odd+=2;
            }
        }
        return ans;
    }
};