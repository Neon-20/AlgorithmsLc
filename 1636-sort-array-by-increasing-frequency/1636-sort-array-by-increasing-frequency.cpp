class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        //So now we have as
        map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }
        sort(begin(nums),end(nums),[&](int a,int b){
          return mp[a]!=mp[b]  ? mp[a]<mp[b] : a>b;  
        });
        return nums;
    }
    
};