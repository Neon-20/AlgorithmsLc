class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        // to return all the possible permuatations of a number is not that big 
        //deal  
        sort(begin(nums),end(nums));
        vector<vector<int>> ans;
    do
    {
     ans.push_back(nums);
    }
        while(next_permutation(begin(nums),end(nums)));
        return ans;
    }
};