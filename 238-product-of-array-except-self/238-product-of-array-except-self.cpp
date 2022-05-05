class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int left=1;
        int right=1;
        //left to right traverse
        vector<int> res(n);
        for(int i=0;i<n;i++){
            if(i>0)
                left*=nums[i-1];
                res[i]=left;
        }
        for(int i=n-1;i>=0;i--){
            if(i<n-1)
                right*=nums[i+1];
            res[i]*=right;
        }
        return res;
    }
};