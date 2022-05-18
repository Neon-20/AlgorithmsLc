class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       //USING MAP
          vector<int>ans;
        int x=1;
        map<int,int>mp;
        for(auto s:nums){
            mp[s]++;
        }
        for(auto s:nums){
            if(mp[x]==0) ans.push_back(x);
            x++;
        }
         return ans;
    }
};