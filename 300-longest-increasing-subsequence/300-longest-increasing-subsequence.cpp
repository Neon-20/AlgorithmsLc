class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
       //using O(nlogn) technique
        vector<int>ans;
        for(auto x:nums){
            if(ans.empty() or ans.back() < x)
            {
                ans.push_back(x);
            }
            else
            {
                auto it=lower_bound(begin(ans),end(ans),x);//index
                *it=x;
                
            }
        }
       return ans.size();
    }
};