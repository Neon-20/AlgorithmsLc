class Solution {
public:
    int maxProduct(vector<int>& nums) {
       // We just need to check from the back and from the front as well
        // Whether we have negative numbers or not
        // Calculate the product from left and right side of the array
            int product=1;
            int res=INT_MIN;
        for(auto &x:nums)
        {
            product*=x;
            res=max(res,product);
            if(product == 0) product=1;
        }
        product=1;
    reverse(begin(nums),end(nums));
        for(auto &x:nums)
        {
            product*=x;
            res=max(product,res);
            if(product == 0) product=1;
        }
        return res;
         
    }
};