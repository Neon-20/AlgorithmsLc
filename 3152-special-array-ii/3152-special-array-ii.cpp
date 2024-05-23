class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> ps(n);
        for(int i=1;i<n;i++){
           ps[i]=nums[i]%2==nums[i-1]%2;
           if(i) ps[i]+=ps[i-1];
        }
        vector<bool> ans;
        for(auto x:queries){
            auto l= x[0];
            auto r = x[1];
            int sum = ps[r]-ps[l];
            if(sum) ans.push_back(false);
            else ans.push_back(true);
        }
        return ans;
    }
};