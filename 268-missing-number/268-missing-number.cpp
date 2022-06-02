class Solution {
public:
    int missingNumber(vector<int>& nums) {
 int n=size(nums);
        map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }
        for(int i=0;i<n+1;i++){
            if(!mp[i]){
                return i;
            }
        }
        return -1;
    }
};