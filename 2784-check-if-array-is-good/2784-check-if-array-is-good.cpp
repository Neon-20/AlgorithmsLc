class Solution {
public:
    bool isGood(vector<int>& nums) {
       int n=nums.size();
        //check if array is good or not
        vector<int> v(202,0);
//         First increment the count ok
        for(auto x:nums) v[x]++;
        if(v[n-1] != 2) return false;
        for(int i=1;i<n-1;i++){
            if(v[i]!=1) return false;
        }
        return true;
    }
};