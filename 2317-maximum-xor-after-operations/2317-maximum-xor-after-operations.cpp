class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        vector<int> bit(32,0);
        for(auto x:nums){
          for(int i=0;i<31;i++){
                if(x & (1<<i)) bit[i]++;
              }
        }
        int ans=0;
        for(int i=0;i<31;i++){
            if(bit[i])
                ans|=(1<<i);
        }
    return ans;
    
    }
};