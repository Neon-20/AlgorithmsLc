class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        //variation of next greater element problem
        stack<pair<int,int>> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() and st.top().first<=nums[i])
            {
                st.pop();
            }
            if(st.empty()) {
                ans[i]=0;
            }
            else {
                ans[i]=st.top().second-i;
            }
            st.push({nums[i],i});
        }
        return ans;
    }
};