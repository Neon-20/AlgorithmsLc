class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        set<int> s(nums.begin(),nums.end());// 1 2 3 4 7 8
        for(int i=1;i<=n;i++){
            if(s.count(i)==false){// s.count means to check whther a
                // particular element exist or nt in set
                ans.push_back(i);
            }
        }
        return ans;
     
    }
};