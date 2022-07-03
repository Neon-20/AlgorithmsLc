class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // rearrange array elements by sign
        int n=nums.size();
        vector<int> ans(n,0);
        int negative=1;
        int positive=0;
        for(int x:nums){
            if(x>0){
                ans[positive]=x;
                positive+=2;
            }
            if(x<0){
                ans[negative]=x;
                negative+=2;
            }
        }
        return ans;
    }
};