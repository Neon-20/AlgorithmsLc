class Solution {
public:
    
    bool find132pattern(vector<int>& nums) {
        int n=nums.size();
        stack<int> st;
        int prev=INT_MIN;
        for(int i=n-1;i>=0;i--)//2 3 1 sequence ok..
        {
            if(prev>nums[i]) return true;
            while(!st.empty() and nums[i]>st.top())
            {
                prev=st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};

   
       