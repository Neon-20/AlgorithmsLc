class Solution {
public:
    // const int nax=1e5+5;
    int findDuplicate(vector<int>& nums) {
       bitset<100005> b(0);
        for(auto x:nums){
            if(b[x] == 0){
                b[x]=1;
            }
            else{
                return x;
            }
        }
        return -1;
    }
};