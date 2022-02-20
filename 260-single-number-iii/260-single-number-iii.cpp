class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        // Using xor how to do it
       // So 2 elements appear once only
        int x=0;
        for(auto &it:nums)
        {
            x^=it;
        }
        int idx;
        // Find the bit where two numbers differ 
        for(int i=0;i<32;i++)
        {
            if(x&(1<<i))
            {
                idx=i;break;
            }
        }
        int first=0;
        //Find the first number 
        for(int i=0;i<n;i++)
        {
            if(nums[i]&(1<<idx))
            {
                first^=nums[i];
            }
        }
        int second=first^x;
        return {first,second};
        
    }
};