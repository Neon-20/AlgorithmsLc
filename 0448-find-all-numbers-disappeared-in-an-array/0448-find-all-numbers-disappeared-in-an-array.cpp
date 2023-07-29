class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
// use a boolean array
        int n=nums.size();
        vector<bool> seen(n+1);
        vector<int> ans;
        for(auto x:nums) seen[x]=true;
        //we have already seen this element
        for(int i=1;i<=n;i++){
            if(!seen[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};