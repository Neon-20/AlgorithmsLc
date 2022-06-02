class Solution {
public:
    bool divideArray(vector<int>& nums) {
       int n=size(nums);
        //divide array into 
        map<int,int> mp;
        for(int x:nums){
            mp[x]++;// 3->2, 2->4
        }
        for(auto x:mp){
            if(x.second%2){
                return false;
            }
        }
        return true;
    }
};