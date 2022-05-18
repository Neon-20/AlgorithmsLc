class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        set<int> s;
        for(int x:nums){
            s.insert(x);
        }
        
        for(int i=1;i<=n;i++){
            if(!s.count(i)){
                ans.push_back(i);
            }
        }
        return ans;
     
    }
};