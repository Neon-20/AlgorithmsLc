class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
       //Product of array except self
     vector<int> prefix(n);
     vector<int> suffix(n);
        prefix[0]=1;
        suffix[n-1]=1;
        for(int i=0;i<n;i++){
            if(i>0) prefix[i]=prefix[i-1]*nums[i-1];
        }
        for(int i=n-1;i>=0;i--){
           if(i<n-1) suffix[i]=suffix[i+1]*nums[i+1];
        }
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i]=prefix[i]*suffix[i];
        }
        return ans;
    }
};