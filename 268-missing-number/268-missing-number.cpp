class Solution {
public:
    int missingNumber(vector<int>& nums) {
int n=size(nums);  
   map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }
        for(int i=0;i<=n;i++){
            if(mp[i] == 0){
                return i;
            }
        }
        return -1;
    }
};