class Solution {
public:
    bool find132pattern(vector<int>& nums) {
      int n=nums.size();
        stack<int> st;
        int store = INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(nums[i]<store) return true;
            else {
                while(!st.empty() and nums[i]>st.top()){
                    store=st.top();
                    st.pop();
                }
                st.push(nums[i]);
            }
        }
        return false;
    }
};
